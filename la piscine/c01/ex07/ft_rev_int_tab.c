/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 09:33:38 by daekim            #+#    #+#             */
/*   Updated: 2020/10/21 16:17:04 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int temp;

	a = 0;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = temp;
		a++;
	}
}
