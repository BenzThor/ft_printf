/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:15:12 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 10:18:17 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char *s, int *len, va_list *args)
{
	if (*s == 'c')
		ft_putchar_fd(va_args(*args, char), 1);
	else if (*s == 's')
		ft_print_string(va_arg(*args, char *));
	else if (*s == 'p')
		ft_print_pointer(va_arg(*args, void *), 1);
	else if (*s == 'd' || *s == 'i')
		ft_print_number(va_arg(*args, int));
	else if (*s == 'u')
		ft_print_unsigned(va_arg(*args, unsigned int));
	else if (*s == 'x' || *s == 'X')
		ft_print_string(va_arg(*args, char *));
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
