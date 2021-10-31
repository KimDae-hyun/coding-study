/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:13:14 by daekim            #+#    #+#             */
/*   Updated: 2020/10/24 17:08:55 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	ft_put(char *argv)
{
	int x;
	int y;
	int a;
	char *count;
	char **ans;

	x = 0;
	y = 0;
	a = 1;
	count = argv;
	ans = (char**)malloc(sizeof(char*)*4);
	while (x < 4)
	{
		ans[x] = (char*)malloc(sizeof(char)*8);
		x++;
	}
	if (x == 0)
	{
		if (*count == '1')
			*ans[x] = 4;
		if (*count == '4')
			while (x < 3)
			{
				*ans[x] = a;
				a++;
				x++;
			}
		count++;
	}
	x = 0;
	y = 0;
	while (x < 7)
	{
		*ans[x] = *ans[x] + '0';
		write(1, &ans[x], 1);
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_put(argv[1]);
	return (0);
}
