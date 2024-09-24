/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:55:56 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:18 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (src != NULL && dst != NULL && dstsize != 0)
	{
		i = 0;
		while ((i < dstsize - 1) && (i < srclen))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char	array[11];
	char	array2[11] = "Hola mundo.";
	
	printf("%zu", ft_strlcpy(array, array2, 11));
	return (0);

}
*/
