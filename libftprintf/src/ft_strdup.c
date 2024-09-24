/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:29:20 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:06 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = (char *) malloc(ft_strlen(s1) + 1 * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	const char *og = "Hola amigo";

	char *cp = strdup(og);

	if (cp != NULL)
	{
		printf("OG: %s\n", og);
		printf("CP: %s\n", cp);

	free(cp);
	}
	else
		printf("ERROR.\n");

	return(0);
}
*/
