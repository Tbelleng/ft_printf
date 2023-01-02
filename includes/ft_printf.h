/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:09:08 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/29 18:42:06 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int				ft_putchar(char c);
int				which_var(va_list args, const char type);
int				ft_printf(const char *str, ...);
int				ft_hexalowp(long unsigned int nbr);
int				ft_adress(long unsigned int n);
unsigned int	ft_hexaup(unsigned int nbr);
unsigned int	ft_putstr(char *str);
unsigned int	ft_putstr(char *str);
unsigned int	ft_hexalow(unsigned int nbr);
unsigned int	ft_putnbr(int nb);
unsigned int	ft_unsignb(unsigned int nb);

#endif
