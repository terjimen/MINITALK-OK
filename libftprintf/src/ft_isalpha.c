/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:53:56 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:48:56 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (c);
	}
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'f';
	if (ft_isalpha(c)) {
		printf("%c es un carácter alfabético. \n", c);
	else 
		printf("%c no es un carácter alfabético. \n", c);

	return (0);
}
*/
