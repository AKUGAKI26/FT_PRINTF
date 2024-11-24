/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:20:50 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/23 17:20:50 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putvoidd(unsigned long s)

{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (s >= 16)
	{
		count += ft_putvoidd(s / 16);
	}
	count += write(1, &base[s % 16], 1);
	return (count);
}

int	ft_putvoid(unsigned long s)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_putvoidd(s);
	return (count);
}
