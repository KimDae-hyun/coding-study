/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:15:41 by daekim            #+#    #+#             */
/*   Updated: 2020/11/03 01:02:31 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ran;
	int i;

	if (max <= min)
		return (0);
	ran = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (max > min)
	{
		ran[i] = min;
		i++;
		min++;
	}
	return (ran);
}
