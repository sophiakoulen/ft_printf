# include "ft_printf.h"

int	val_length(t_value val, char specifier)
{
	int	res;

	if (specifier == 'i' || specifier == 'd')
		res = ft_nbr_len(val.i, 10);
	else if (specifier == 'u')
		res = ft_nbr_len_unsigned(val.u, 10);
	else if (specifier == 'x' || specifier == 'X')
		res = ft_nbr_len_unsigned(val.u, 16);
	else if (specifier == 'c')
		res = 1;
	else if (specifier == 's')
	{
		if (val.s)
			res = ft_strlen(val.s);
		else
			res = ft_strlen("(null)");
	}
	else if (specifier == 'p')
		res = 2 + ft_nbr_len_unsigned((unsigned int)val.p, 16);
	else
		res = 0;
	return (res);
}