/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 09:17:56 by daekim            #+#    #+#             */
/*   Updated: 2020/11/02 09:07:30 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char **argv)
{
	int i;

	i = 0;
	while (argv[0][i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 1)
	{
		while (i < ft_strlen(argv))
			write(1, &argv[0][i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
