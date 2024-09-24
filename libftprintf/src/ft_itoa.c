/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:48:14 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:49:15 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	num_len(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	while (n <= -10 || n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = num_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			str[len - 1] = -(n % 10) + '0';
		else
			str[len - 1] = n % 10 + '0';
		len--;
		n /= 10;
	}
	return (str);
}
