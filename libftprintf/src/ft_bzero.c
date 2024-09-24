/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teresajimenezcabanas <teresajimenezcaba    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:32:32 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/03 21:47:36 by teresajimen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*f;

	f = (unsigned char *)s;
	while (n--)
	{
		*f = 0;
		f++;
	}
}
/*
int	main(void)
{

}
*/
