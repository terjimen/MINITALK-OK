/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:31:55 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:12:32 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define D_L_BASE "0123456789"
# define H_L_BASE "0123456789abcdef"
# define H_U_BASE "0123456789ABCDEF"

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include "libft.h"

int	print_char(int c);
int	print_str(char *str);
int	print_int(long n, int base);
int	print_dig(unsigned int n, int base);
int	print_dig_alt(unsigned int n, int base);
int	print_unsigned_dec(unsigned int n, int base);
int	print_form(char specifier, va_list ap);
int	ft_printf(char const *form, ...);
int	print_ns(unsigned long n, int base);

#endif
