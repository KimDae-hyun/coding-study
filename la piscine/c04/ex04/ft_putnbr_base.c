/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:59:13 by daekim            #+#    #+#             */
/*   Updated: 2020/10/31 14:02:40 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int		ft_check(char *str)
{
	int b;
	int c;

	if (ft_strlen(str) <= 1)
		return (1);
	b = 0;
	while (str[b])
	{
		if (str[b] == '+' || str[b] == '-')
			return (1);
		c = 1;
		while (str[b + c])
		{
			if (str[b] == str[b + c])
				return (1);
			c++;
		}
		b++;
	}
	return (0);
}

void	ft_rec(long num, int div, char *base)
{
	int i;

	num = num / div;
	if (num >= div)
		ft_rec(num, div, base);
	num = num % div;
	i = 0;
	while (base[i])
	{
		if (i == num)
			num = base[i];
		i++;
	}
	write(1, &num, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		div;
	long	num;
	int		j;

	if (ft_check(base))
		return ;
	div = ft_strlen(base);
	num = nbr;
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num >= div)
		ft_rec(num, div, base);
	num = num % div;
	j = 0;
	while (base[j])
	{
		if (j == num)
			num = base[j];
		j++;
	}
	write(1, &num, 1);
	num = num / div;
}
