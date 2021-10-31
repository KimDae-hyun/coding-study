/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 02:01:16 by daekim            #+#    #+#             */
/*   Updated: 2020/11/01 03:56:53 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *argv1, char *argv2)
{
	while (*argv1 && *argv2)
	{
		if (*argv1 != *argv2)
			return (*argv1 - *argv2);
		argv1++;
		argv2++;
	}
	return (*argv1 - *argv2);
}

char	ft_putchar(int argc, char **argv)
{
	int		a;
	int		b;
	char	*temp;

	a = 0;
	while (++a < argc)
	{
		b = 0;
		while (++b < argc - 1)
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				temp = argv[b];
				argv[b] = argv[b + 1];
				argv[b + 1] = temp;
			}
	}
	return (**argv);
}

int		main(int argc, char **argv)
{
	int		i;
	int		a;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
		write(1, "\n", 1);
		return (0);
	}
	else if (argc > 2)
		ft_putchar(argc, argv);
	a = 0;
	while (++a < argc)
	{
		i = 0;
		while (argv[a][i])
			write(1, &argv[a][i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
