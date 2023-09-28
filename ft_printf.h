/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:26:50 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 11:51:49 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_check(char *ptr, int *len, va_list *args);
void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putptr(size_t ptr, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putuns(unsigned int n, int *len);
void	ft_puthex(char s, unsigned long long nbr, int *len);

#endif
