/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 10:58:31 by daekim            #+#    #+#             */
/*   Updated: 2020/11/04 13:06:14 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
