/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 09:26:29 by daekim            #+#    #+#             */
/*   Updated: 2020/10/31 09:51:48 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int a;
	int b;
	int i;

	a = 0;
	if (argc >= 2)
		while (++a < argc)
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
