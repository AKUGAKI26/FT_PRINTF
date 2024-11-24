/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:20:30 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/23 17:20:30 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	number;
	int		count;

	number = n;
	count = 0;
	if (number < 0)
	{
		number *= -1;
		count += write(1, "-", 1);
	}
	if (number >= 10)
		count += ft_putnbr(number / 10);
	count += ft_putchar(number % 10 + '0');
	return (count);
}
