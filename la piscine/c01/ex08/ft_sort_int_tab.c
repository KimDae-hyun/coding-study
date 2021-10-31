/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 11:27:41 by daekim            #+#    #+#             */
/*   Updated: 2021/02/28 19:40:09 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int temp;

	a = 0;
	while (a < size - 1)
	{
		if (tab[a] > tab[a + 1])
		{
			temp = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = temp;
			ft_sort_int_tab(tab, size);
		}
		a++;
	}
}
