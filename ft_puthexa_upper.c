/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenhamm <obenhamm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:20:12 by obenhamm          #+#    #+#             */
/*   Updated: 2024/11/23 17:20:12 by obenhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_upper(unsigned int n)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_puthexa_upper(n / 16);
	count += write(1, &base[n % 16], 1);
	return (count);
}
