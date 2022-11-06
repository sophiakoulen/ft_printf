# include "ft_printf.h"

t_value get_val(va_list ap, char specifier)
{
	t_value val;

	if (specifier == 'i' || specifier == 'd' || specifier == 'c')
		val.i = va_arg(ap, int);
	else if (specifier == 'u' || specifier == 'x' || specifier == 'X')
		val.u = va_arg(ap, unsigned);
	else if (specifier == 's')
		val.s = va_arg(ap, char *);
	else if (specifier == 'p')
		val.p = va_arg(ap, void *);
	else
		val.p = 0;
	return (val);
}