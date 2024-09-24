/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:06 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:49:32 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
		*str++ = c;
	return (b);
}
/*
int	main(void)
{
	char	str[20];
	//llena los primeros 10 elementos con el valor dado en str
	ft_memset(str, 'X', 10);
	printf("La string queda: %s\n", str);
	return (0);
}
*/
