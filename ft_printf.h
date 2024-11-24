/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:19:26 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/23 17:19:26 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putvoidd(unsigned long s);
int	ft_putvoid(unsigned long s);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_puthexa_u(unsigned int n);
int	ft_puthexa_upper(unsigned int n);
int	ft_print_format(va_list args, char c);

#endif