#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define DECIMAL	"0123456789"
# define HEX_UPPER	"0123456789ABCDEF"
# define HEX_LOWER	"0123456789abcdef"

typedef union	u_value
{
	int				i;
	unsigned int	u;
	char			*s;
	void			*p;
}	t_value;

int	ft_printf(const char *format, ...);

t_value get_val(va_list ap, char specifier);
void	print_val(t_value val, char specifier, int fd);
int		val_length(t_value val, char specifier);

#endif