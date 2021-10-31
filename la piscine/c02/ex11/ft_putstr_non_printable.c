/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:01:11 by daekim            #+#    #+#             */
/*   Updated: 2020/10/26 15:06:02 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char a, unsigned char b)
{
	if (a < 10)
	{
		a = a + 48;
		write(1, &a, 1);
	}
	else
	{
		a = a + 87;
		write(1, &a, 1);
	}
	if (b < 10)
	{
		b = b + 48;
		write(1, &b, 1);
	}
	else
	{
		b = b + 87;
		write(1, &b, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			a = (unsigned char)str[i] / 16;
			b = (unsigned char)str[i] % 16;
			ft_putchar(a, b);
		}
		i++;
	}
}
