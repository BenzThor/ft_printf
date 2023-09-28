/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:15:02 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 10:39:15 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(char s, unsigned long long nbr, int *len)
{
	char	*base;

	if (s == 'x' || s == 'p')
	{
		base = "0123456789abcdef";
		if (s == 'p')
			*len += write(1, '0x', 2);
	}
	else if (s == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_print_num(s, (nbr / 16));
	ft_putchar(base[nbr % 16], len);
}
