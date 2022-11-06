#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		i;
	int		fd;
	int		ret;
	t_value val;

	fd = 1;
	i = 0;
	ret = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], fd);
			ret++;
		}
		else
		{
			i++;
			if (format[i] == '%')
			{
				ft_putchar_fd('%', fd);
				ret++;
			}
			else
			{
				val = get_val(ap, format[i]);
				print_val(val, format[i], fd);
				ret += val_length(val, format[i]);
			}
		}
		i++;
	}	
	va_end(ap);
	return (ret);
}