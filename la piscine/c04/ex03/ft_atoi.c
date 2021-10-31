/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:37:52 by daekim            #+#    #+#             */
/*   Updated: 2020/10/28 10:58:37 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		skipnminus(char *str, int *a)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	*a = i;
	return (count);
}

int		ft_atoi(char *str)
{
	int sign;
	int a;
	int output;

	sign = 1;
	a = 0;
	if (skipnminus(str, &a) % 2)
		sign = -sign;
	output = 0;
	while (str[a] >= '0' && str[a] <= '9')
	{
		output = output * 10;
		output = output + str[a] - '0';
		a++;
	}
	output = output * sign;
	return (output);
}
