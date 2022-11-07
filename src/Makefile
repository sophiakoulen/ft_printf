NAME=libftprintf.a

SRCS= ft_printf.c \
utilities/ft_printf_get_value.c \
utilities/ft_printf_print_value.c \
utilities/ft_printf_length_value.c 

OBJS=$(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -Ilibft

LIBFT_PATH = ~/cursus42/libft/src

all: $(NAME)

fetch-libft:
	rm -rf libft
	cp -R $(LIBFT_PATH) libft

$(NAME): $(OBJS)
	make extra -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all