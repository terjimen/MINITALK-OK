/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:11:14 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:49:10 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = '5';
	if (isdigit(c)) {
		printf("%c es un dígito.\n", c);
	} else {
		printf("%c no es un dígito.\n", ci);
	}

	return (0);
}	
}
*/
