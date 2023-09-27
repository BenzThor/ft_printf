/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:15:12 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/27 16:58:56 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			len += ft_check(s, len);
		len++;
		s++;
	}
	va_end(args);
	return (len);
}
