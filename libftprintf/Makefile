# Define el compilador y las banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

# Define los archivos fuente y objeto
SRCS =	src/ft_atoi.c \
		src/ft_memset.c \
		src/ft_strlen.c \
		src/ft_bzero.c \
		src/ft_printf.c \
		src/ft_strmapi.c \
		src/ft_calloc.c \
		src/ft_putchar_fd.c \
		src/ft_strncmp.c \
		src/ft_isalnum.c \
		src/ft_putendl_fd.c \
		src/ft_strnstr.c \
		src/ft_isalpha.c \
		src/ft_putnbr_fd.c \
		src/ft_strrchr.c \
		src/ft_isascii.c \
		src/ft_putstr_fd.c \
		src/ft_strtrim.c \
		src/ft_isdigit.c \
		src/ft_split.c \
		src/ft_substr.c \
		src/ft_isprint.c \
		src/ft_strchr.c \
		src/ft_support_char.c \
		src/ft_itoa.c \
		src/ft_strdup.c \
		src/ft_support_dig.c \
		src/ft_memchr.c \
		src/ft_striteri.c \
		src/ft_tolower.c \
		src/ft_memcmp.c \
		src/ft_strjoin.c \
		src/ft_toupper.c \
		src/ft_memcpy.c \
		src/ft_strlcat.c \
		src/ft_memmove.c \
		src/ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

# Define el nombre de la biblioteca
NAME = libft.a

# Regla por defecto
all: $(NAME)

# Regla para construir la biblioteca
$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

# Regla para compilar archivos fuente en objetos
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos objeto
clean:
	rm -f $(OBJS) 

# Regla para limpiar la biblioteca y el ejecutable de prueba
fclean: clean
	rm -f $(NAME)

# Regla para reconstruir todo
re: fclean all

# Reglas especiales
.PHONY: all clean fclean re test_ft_isalnum
