/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:07:55 by terjimen          #+#    #+#             */
/*   Updated: 2024/09/24 19:21:13 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "minitalk.h"
#include "libftprintf/include/libft.h"

t_data	g_data = {NULL, 0};

void	append_char_to_global(char c)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = malloc(g_data.len + 2);
	if (!new_str)
		return ;
	while (i < g_data.len)
	{
		new_str[i] = g_data.str[i];
		i++;
	}
	new_str[i] = c;
	new_str[i + 1] = '\0';
	free(g_data.str);
	g_data.str = new_str;
	g_data.len++;
}

void	handle_signal(int signal, siginfo_t *info, void *context)
{
	static int	bit_count = 0;
	static char	current_char = 0;

	(void)info;
	(void)context;
	if (signal == SIGUSR1)
		current_char |= (1 << bit_count);
	bit_count++;
	if (bit_count == 8)
	{
		if (current_char == '\0')
		{
			write(1, g_data.str, g_data.len);
			write(1, "\n", 1);
			free(g_data.str);
			g_data.str = NULL;
			g_data.len = 0;
		}
		else
		{
			append_char_to_global(current_char);
		}
		current_char = 0;
		bit_count = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;
	pid_t				pid;

	sa.sa_sigaction = handle_signal;
	sa.sa_flags = SA_SIGINFO;
	pid = getpid();
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Server PID: %d \n", pid);
	while (1)
		;
	return (0);
}
