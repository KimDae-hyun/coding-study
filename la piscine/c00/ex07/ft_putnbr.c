/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 02:30:24 by daekim            #+#    #+#             */
/*   Updated: 2020/10/21 10:47:07 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_repeat(long c)
{
	c = c / 10;
	if (c > 10)
		ft_repeat(c);
	c = c % 10;
	ft_putchar(c + '0');
}

void	ft_putnbr(int nb)
{
	long c;

	c = nb;
	if (c == 0)
		write(1, "0", 1);
	else if (c < 0)
	{
		write(1, "-", 1);
		c *= -1;
	}
	while (c != 0)
	{
		if (c > 10)
		{
			ft_repeat(c);
		}
		c = c % 10;
		ft_putchar(c + '0');
		c = c / 10;
	}
}
