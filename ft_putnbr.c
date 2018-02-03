/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <nrepak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:32:30 by nrepak            #+#    #+#             */
/*   Updated: 2017/11/19 20:50:13 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(-214748);
		ft_putnbr(3648);
	}
	else
	{
		if (n >= 0 && n <= 9)
			ft_putchar('0' + n);
		else if (n < 0)
		{
			ft_putchar('-');
			ft_putnbr(n * (-1));
		}
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}
