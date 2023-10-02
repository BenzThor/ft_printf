/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenz <tbenz@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:26:50 by tbenz             #+#    #+#             */
/*   Updated: 2023/10/02 10:10:58 by tbenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(int c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putptr(void *ptr, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putuns(unsigned int n, int *len);
void	ft_puthex(char s, unsigned int nbr, int *len);
int		ft_printf(const char *s, ...);

#endif
