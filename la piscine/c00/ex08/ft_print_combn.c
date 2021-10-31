/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:27:57 by daekim            #+#    #+#             */
/*   Updated: 2020/10/19 18:53:21 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(char x)
{
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8' && a < b)
		{
			c = b + 1;
			while (c <= '9' && b < c)
			{
				ft_rmline(a, b, c);
				if (a < '7')
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_combn(int n)
{
	char x;

	x = 'a';
	while (n > 0)
	{
		ft_putchar(x++);
		n--;
	}
}
