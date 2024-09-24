/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:52:14 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:31 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hola amigo";
	int	find = 'o';

	char *locate = ft_strrchr(str, find);

	if (locate)
		printf("El caracter '%c' ESTA en la string en 
esta posicion %ld.\n", find, locate-str);
	else
		printf("El caracter '%c' NO ESTA en la string.\n", find);
	return (0);
}
*/
