/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned_fd.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulen <skoulen@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:46:41 by skoulen           #+#    #+#             */
/*   Updated: 2022/11/06 11:13:25 by skoulen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_base_unsigned_helper(unsigned int n, unsigned int base, char *symbols, int fd)
{
	if (n >= base)
		ft_putnbr_base_unsigned_helper(n / base, base, symbols, fd);
	ft_putchar_fd(*(symbols + (n % base)), fd);
}

void	ft_putnbr_base_unsigned_fd(unsigned int n, char *symbols, int fd)
{
	unsigned int	base;

	base = ft_strlen(symbols);
	if (base < 2)
		return ;
	ft_putnbr_base_unsigned_helper(n, base, symbols, fd);
}