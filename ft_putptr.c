/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:31:41 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 11:38:54 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(size_t ptr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	len += write(1, "0x", 2);
	if (ptr >= 16)
		ft_putptr((ptr / 16), len);
	ft_putchar(base[ptr % 16], len);
}
