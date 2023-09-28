/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:15:02 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 11:10:06 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putthex(char s, unsigned nbr, int *len)
{
	char	*base;

	if (s == 'x' || s == 'p')
		base = "0123456789abcdef";
	else if (s == 'X')
		base = "0123456789ABCDEF";
	if (nbr >= 16)
		ft_puthex(s, (nbr / 16), len);
	ft_putchar(base[nbr % 16], len);
}
