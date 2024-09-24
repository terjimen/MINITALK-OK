/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:56:19 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:50:01 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static size_t	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*cp_c(const char *s1, int s, int f)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc((f - s + 1) * sizeof(char));
	if (!s2)
		return (0);
	while (s < f)
	{
		s2[i] = s1[s];
		i++;
		s++;
	}
	s2[i] = '\0';
	return (s2);
}

static void	go_free(char **fin, size_t x, size_t y)
{
	while (x < y)
	{
		free(fin[x]);
		x++;
	}
	free(fin);
}

static char	**spl_copy(const char *s, char **fin, char c)
{
	size_t	i;
	size_t	j;
	int		st;

	i = 0;
	j = 0;
	st = -1;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			st = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			fin[j] = cp_c(s, st, i);
			if (!fin[j])
				return ((go_free(fin, 0, j)), NULL);
			j++;
			fin[j] = NULL;
			st = -1;
		}
	}
	return ((fin[j] = NULL), fin);
}

char	**ft_split(char const *s, char c)
{
	char	**fin;

	if (!s)
		return (0);
	fin = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!fin)
		return (0);
	fin = spl_copy(s, fin, c);
	return (fin);
}
/*
int main() 
{
	int i = 0;
	char c = ' ';
	char *s = "hola crack";
	char **split = ft_split(s, c);
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]);
		i++;
	}
	i = 0;
    while (split[i] != NULL) {
        free(split[i]);
        i++;
    }
    free(split);

    return 0;
}
*/
