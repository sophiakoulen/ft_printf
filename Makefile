NAME=libftprintf.a
SRCS=ft_printf.c
OBJS=$(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -Ilibft

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rs $(NAME) $?

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all