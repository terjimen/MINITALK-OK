/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:00:49 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:25 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	const char *s1 = "Hola";
	const char *s2 = "Hole";
	int comp = ft_strncmp(s1, s2, 4);

	if (comp < 0)
		printf("s1 es menor que s2.\n");
	else if (comp> 0)
		printf("s1 es mayor que s2\n");
	else
		printf("las strings son iguales.\n");

	return (0);
}
*/
