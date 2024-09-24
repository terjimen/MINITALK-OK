/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:10:36 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:49:19 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	lett;

	src = (unsigned char *)s;
	lett = (unsigned char)c;
	while (n--)
	{
		if (*src == lett)
			return (src);
		src++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char src[] = "This is a test string.";
	char lett = 'a';
	size_t length = strlen(src);

	char *result = ft_memchr(src, lett, length);
	if (result != NULL)
		printf("Se encontró el carácter '%c'
en la posición %ld.\n", lett, result - src);
	else
		printf("'%c' no se encontró en la cadena.\n", lett);

	return (0);
}
*/
