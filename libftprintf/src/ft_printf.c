/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:10:24 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:49:49 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	print_form(char specifier, va_list ap)
{
	int	i;

	i = 0;
	if (specifier == 'c')
		i += print_char(va_arg(ap, int));
	else if (specifier == 's')
		i += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		i += print_int((long)va_arg(ap, int), 10);
	else if (specifier == 'x')
		i += print_dig((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		i += print_dig_alt((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'u')
		i += print_unsigned_dec((unsigned int)va_arg(ap, unsigned int), 10);
	else if (specifier == '%')
		return (write(1, &specifier, 1));
	else if (specifier == 'p')
		i += print_ns((unsigned long)va_arg(ap, void *), 16);
	else
	{
		i += write(1, &specifier, 1);
		return (i);
	}
	return (i);
}

int	ft_printf(char const *form, ...)
{
	int		i;
	va_list	ap;

	va_start(ap, form);
	i = 0;
	while (*form)
	{
		if (*form == '%')
			i += print_form(*(++form), ap);
		else
			i += write (1, form, 1);
		++form;
	}
	va_end(ap);
	return (i);
}
