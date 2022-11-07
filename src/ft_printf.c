/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <skoulen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:49:04 by skoulen           #+#    #+#             */
/*   Updated: 2022/11/07 10:49:53 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vdprintf(const char *format, va_list ap, int fd)
{
	int		ret;
	t_value	val;

	ret = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, fd);
			ret++;
		}
		else
		{
			format++;
			ft_printf_get_value(ap, *format, &val);
			ft_printf_print_value(val, *format, fd);
			ret += ft_printf_length_value(val, *format);
		}
		format++;
	}
	return (ret);
}

int	ft_vprintf(const char *format, va_list ap)
{
	int	ret;

	ret = ft_vdprintf(format, ap, 1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	ap;

	va_start(ap, format);
	ret = ft_vprintf(format, ap);
	va_end(ap);
	return (ret);
}
