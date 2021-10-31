/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:36:07 by daekim            #+#    #+#             */
/*   Updated: 2020/11/04 18:08:38 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int a;
	int b;

	if (ft_strlen(str) <= 1)
		return (1);
	a = 0;
	while (str[a])
	{
		if (str[a] == '+' || str[a] == '-' || str[a] == '\t' || str[a] == '\n'
				|| str[a] == '\v' || str[a] == '\f' || str[a] == '\r'
				|| str[a] == ' ')
			return (1);
		b = 1;
		while (str[a + b])
		{
			if (str[a] == str[a + b])
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

int		ft_checka(char *str, int *a)
{
	int j;
	int count;

	j = 0;
	count = 0;
	while (str[j] && (str[j] == '\t' || str[j] == '\n' || str[j] == '\v'
				|| str[j] == '\f' || str[j] == '\r' || str[j] == ' '))
		j++;
	while (str[j] && (str[j] == '+' || str[j] == '-'))
	{
		if (str[j] == '-')
			count++;
		j++;
	}
	*a = j;
	return (count);
}

long	ft_alpha(char *str, char *base, int div, int *a)
{
	int		i;
	int		j;
	int		b;
	int		c;
	long	sum;

	j = *a;
	sum = 0;
	while (str[j])
	{
		i = -1;
		while (base[++i])
			if (str[j] == base[i])
			{
				b = 1;
				c = ft_strlen(str);
				while (--c > j)
					b *= div;
				sum += i * b;
			}
		j++;
	}
	return (sum);
}
