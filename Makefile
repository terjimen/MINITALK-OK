# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: terjimen <terjimen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 21:07:59 by terjimen          #+#    #+#              #
#    Updated: 2024/09/24 19:17:50 by terjimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
SRC_CLIENT = client.c
SRC_SERVER = server.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libftprintf/libft.a
all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): server.c $(LIBFT)
	$(CC) $(CFLAGS) server.c -o $(NAME_SERVER) -Llibftprintf -lft

$(NAME_CLIENT): client.c $(LIBFT)
	$(CC) $(CFLAGS) client.c -o $(NAME_CLIENT) -Llibftprintf -lft

$(LIBFT):
	make -C libftprintf

clean:
	make -C libftprintf clean

fclean: clean
	make -C libftprintf fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re