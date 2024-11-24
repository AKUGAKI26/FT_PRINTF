/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:20:20 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/23 17:20:20 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned long	number;
	int				count;
	

	number = n;
	count = 0;
	if (number >= 10)
		count += ft_putnbr_u(number / 10);
	count += ft_putchar(number % 10 + '0');
	return (count);
}
