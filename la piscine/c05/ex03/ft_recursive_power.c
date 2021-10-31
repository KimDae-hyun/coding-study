/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:21:23 by daekim            #+#    #+#             */
/*   Updated: 2020/10/29 00:01:21 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int a;

	a = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	a *= nb;
	return (a * ft_recursive_power(a, --power));
}
