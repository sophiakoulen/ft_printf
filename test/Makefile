CC = gcc
CFLAGS = -Wall -Wextra -Werror -I../src -L../src

SRC = main.c

test: $(SRC)
	$(CC) $(CFLAGS) $? -lftprintf -o $@

fclean:
	rm -f test

re: fclean test