/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:55:33 by daekim            #+#    #+#             */
/*   Updated: 2020/11/04 18:06:55 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check(char *str);
int		ft_checka(char *str, int *a);
long	ft_alpha(char *str, char *base, int div, int *a);

char	*ft_itoa(char *bnum, int i, int sign)
{
	char	*anum;
	int		j;

	j = 0;
	anum = (char *)malloc(sizeof(char) * 35);
	while (--i >= 0)
	{
		if (sign < 0)
		{
			anum[j] = '-';
			sign = 1;
			j++;
		}
		anum[j] = bnum[i];
		j++;
	}
	anum[j] = '\0';
	return (anum);
}

char	*ft_arr(long atoi, char *bt, int sign)
{
	int		i;
	int		j;
	char	*bnum;
	long	di_to;

	i = 0;
	di_to = ft_strlen(bt);
	bnum = (char *)malloc(sizeof(char) * 35);
	while (atoi >= di_to)
	{
		j = -1;
		while (bt[++j])
			if (j == atoi % di_to)
				bnum[i++] = bt[j];
		atoi = atoi / di_to;
	}
	if (atoi < di_to)
	{
		j = -1;
		while (bt[++j])
			if (j == atoi)
				bnum[i++] = bt[j];
	}
	return (ft_itoa(bnum, i, sign));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		di_fr;
	char	*output;
	int		a;
	int		sign;
	long	atoi;

	sign = 1;
	if (*nbr == '\0')
		return (0);
	if (ft_check(base_from) || ft_check(base_to))
		return (0);
	if (ft_checka(nbr, &a) % 2)
		sign = -sign;
	di_fr = ft_strlen(base_from);
	atoi = ft_alpha(nbr, base_from, di_fr, &a);
	output = ft_arr(atoi, base_to, sign);
	return (output);
}
