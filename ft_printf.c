#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		ret;
	int		i;
	int		fd;
	char	*str;

	fd = 1;
	ret = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], fd);
			i++;
		}
		else
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				int n = va_arg(ap, int);
				ft_putnbr_fd(n, fd);
				i += nbrlen(fd);
			}
			else if (format[i] == 'c')
			{
				unsigned char c = va_arg(ap, unsigned char);
				ft_putchar_fd(c, fd);
				i += 1;
			}
			else if (format[i] == 'p')
			{
				
			}
			else if (format[i] == 'u')
			{
				unsigned int n = va_arg(ap, unsigned int);
				
				ft_putnbr_fd((int)n, fd);

				i += ft_nbr_len(n, 10);
			}
			else if (format[i] == 'x')
			{
				int n = va_arg(ap, int);
				str = ft_itoa_base(n, "0123456789abcde");
				if (!str)
				{
					//handle error
				}
				ft_putstr_fd(str, fd);
				free(str);
				i += ft_nbr_len()
			}
			else if (format[i] == 'X')
			{

			}
			else if (format[i] == 's')
			{
				char *str = va_arg(ap, char *);
				ft_putstr_fd(str, fd);
			}
			else if (format[i] == '%')
			{
				ft_putchar_fd('%', fd);
				i = i + 1;
			}
		}
	}	
	va_end(ap);
	ret += i;
	return (ret);
}