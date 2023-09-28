/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:26:50 by tbenz             #+#    #+#             */
/*   Updated: 2023/09/28 10:11:05 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_check(char *ptr, int len, va_list args);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_print_pointer(void *ptr, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putuns_fd(unsigned int n, int fd);
void	ft_puthex_fd(char s, unsigned long long nbr, int fd);

#endif
