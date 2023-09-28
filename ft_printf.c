/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:15:12 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 11:55:05 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char *s, int *len, va_list *args)
{
	if (*s == 'c')
		ft_putchar(va_arg(*args, char), len);
	else if (*s == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (*s == 'p')
		ft_putptr(va_arg(*args, size_t), len);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (*s == 'u')
		ft_putuns(va_arg(*args, unsigned int), len);
	else if (*s == 'x' || *s == 'X')
		ft_puthex(s[0], va_arg(*args, unsigned), len);
	else if (*s == '%')
		len += write (1, '%', 1);
	else
		return ;
}

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	args;

	if (!s)
		return (NULL);
	va_start(args, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
			ft_check(++s, &len, args);

		len++;
		s++;
	}
	va_end(args);
	return (len);
}
