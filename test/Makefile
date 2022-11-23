CC = gcc
CFLAGS = -Wall -Wextra -I../src -L../src -I../libft

SRC = main.c

test: $(SRC)
	$(CC) $(CFLAGS) $? -lftprintf -o $@

fclean:
	rm -f test

re: fclean test