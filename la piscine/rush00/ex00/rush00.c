/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:09:27 by daekim            #+#    #+#             */
/*   Updated: 2020/10/18 17:22:39 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	first_line(int x)
{
	int	nx;

	nx = 0;
	while (nx < x)
	{
		if (nx == 0)
		{
			ft_putchar('o');
		}
		else if (nx == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		++nx;
	}
	ft_putchar('\n');
}

void	mid_line(int x, int y)
{
	int nx;
	int ny;

	ny = 1;
	while (ny < y - 1)
	{
		nx = 0;
		while (nx < x)
		{
			if (nx == 0 || nx == x - 1)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			++nx;
		}
		++ny;
		ft_putchar('\n');
	}
}

void	end_line(int x)
{
	int nx;

	nx = 0;
	while (nx < x)
	{
		if (nx == 0)
		{
			ft_putchar('o');
		}
		else if (nx == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		++nx;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x * y != 0)
	{
		if (x < 0)
			x *= -1;
		if (y < 0)
			y *= -1;
		first_line(x);
		mid_line(x, y);
		if (y > 1)
		{
			end_line(x);
		}
	}
}
