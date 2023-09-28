/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:24:19 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 12:31:04 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		ft_putchar('-', len);
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10, len);
		ft_putnbr(i % 10, len);
	}
	else
		ft_putchar(i + 48, len);
}
