/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:54:14 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:16 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (!size && !dst)
		return (0);
	if (size < dst_len + 1)
		return (size + src_len);
	if (size > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + 1 + i < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char dst[20] = "Hello, ";
	char *src = "world!";
	size_t size = sizeof(dst);

	size_t result = ft_strlcat(dst, src, dstsize);

	printf("String original: %s\n", src);
	printf("String de destino: %s\n", dst);
	printf("Strings concatenadas en la de destino: %s\n", dst);
	printf("Longuitud de la concatenada final: %zu\n", result);

    return 0;
}
*/
