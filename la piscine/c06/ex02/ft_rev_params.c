/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 09:52:44 by daekim            #+#    #+#             */
/*   Updated: 2020/10/31 09:57:08 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int a;
	int b;
	int i;

	a = argc;
	if (argc >= 2)
		while (--a > 0)
		{
			i = 0;
			while (argv[a][i])
				i++;
			b = -1;
			while (++b < i)
				write(1, &argv[a][b], 1);
			write(1, "\n", 1);
		}
	return (0);
}
