/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:03:21 by daekim            #+#    #+#             */
/*   Updated: 2020/11/05 02:20:37 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(long c)
{
	c = c / 10;
	if (c >= 10)
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
		if (c >= 10)
			ft_repeat(c);
		c = c % 10;
		ft_putchar(c + '0');
		c = c / 10;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par.str[i])
	{
		ft_putstr(par[i].str);
		ft_putchar("\n");
		ft_putnbr(par[i].size);
		ft_putchar("\n");
		ft_putstr(par[i].copy);
		ft_putchar("\n");
		i++;
	}
}
