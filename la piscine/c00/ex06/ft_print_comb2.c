/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 00:14:04 by daekim            #+#    #+#             */
/*   Updated: 2020/10/19 10:07:16 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int c)
{
	write(1, &c, 1);
}

void	ft_rmline(int a, int b, int x, int y)
{
	ft_putint(a);
	ft_putint(b);
	write(1, " ", 1);
	ft_putint(x);
	ft_putint(y);
	if (!(a == '9' && b == '8' && x == '9' && y == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_num(int a, int b, int x, int y)
{
	x = a;
	while (x <= '9' && x >= a)
	{
		if (a == x)
		{
			y = b + 1;
		}
		else if (a < x)
		{
			y = '0';
		}
		while (y <= '9')
		{
			ft_rmline(a, b, x, y);
			y++;
		}
		x++;
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int x;
	int y;

	x = '0';
	y = '0';
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_num(a, b, x, y);
			b++;
		}
		a++;
	}
}
