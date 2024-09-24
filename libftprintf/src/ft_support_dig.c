/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_dig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:39:46 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:44 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	print_int(long n, int base)
{
	int		i;
	char	*dig;

	dig = "0123456789";
	if (n < 0)
	{
		write (1, "-", 1);
		return (print_int(-n, base) + 1);
	}
	else if (n < base)
		return (print_char(dig[n]));
	else
	{
		i = print_int(n / base, base);
		return (i + print_int(n % base, base));
	}
}

int	print_dig(unsigned int n, int base)
{
	int		i;
	char	*dig;

	dig = "0123456789abcdef";
	if (n < (unsigned int)base)
		return (print_char(dig[n]));
	else
	{
		i = print_dig(n / base, base);
		return (i + print_dig(n % base, base));
	}
}

int	print_dig_alt(unsigned int n, int base)
{
	int		i;
	char	*dig;

	dig = "0123456789ABCDEF";
	if (n < (unsigned int)base)
		return (print_char(dig[n]));
	else
	{
		i = print_dig_alt(n / base, base);
		return (i + print_dig_alt(n % base, base));
	}
}

int	print_unsigned_dec(unsigned int n, int base)
{
	int		i;
	char	*dig;

	dig = "0123456789";
	if (n < (unsigned int)base)
		return (print_char(dig[n]));
	else
	{
		i = print_unsigned_dec(n / base, base);
		return (i + print_unsigned_dec(n % base, base));
	}
}

int	print_ns(unsigned long n, int base)
{
	static int	i;
	char		*sym;

	i = 0;
	sym = "0123456789abcdef";
	if (n >= (unsigned long)base)
	{
		print_ns(n / base, base);
		n = n % base;
	}
	if (i == 0)
		i += write(1, "0x", 2);
	i++;
	write(1, &sym[n], 1);
	return (i);
}
