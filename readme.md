# ft_printf

ft_printf is a custom simplified version of printf.

```C
int	ft_printf(const char *format, ...);

int	ft_dprintf(int fd, const char *format, ...);
```

It handles the following specifiers:
- %c
- %s
- %d
- %i
- %u
- %x
- %X
- %p
- %%

## how to make

`cd src && make LIBFT_PATH=../libft`