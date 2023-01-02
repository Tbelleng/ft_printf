/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:06:30 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/29 18:49:26 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalowp(long unsigned int nbr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (nbr < 16)
		i += ft_putchar(base[nbr]);
	else
	{
		i += ft_hexalowp(nbr / 16);
		i += ft_hexalowp(nbr % 16);
	}
	return (i);
}

unsigned int	ft_hexalow(unsigned int nbr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (nbr < 16)
		i += ft_putchar(base[nbr]);
	else
	{
		i += ft_hexalow(nbr / 16);
		i += ft_hexalow(nbr % 16);
	}
	return (i);
}

unsigned int	ft_hexaup(unsigned int nbr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789ABCDEF";
	if (nbr < 16)
		i += ft_putchar(base[nbr]);
	else
	{
		i += ft_hexaup(nbr / 16);
		i += ft_hexaup(nbr % 16);
	}
	return (i);
}

int	ft_adress(long unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i += ft_putstr("0x");
	i += ft_hexalowp(n);
	return (i);
}
