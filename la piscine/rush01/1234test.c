/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1234.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:35:25 by daekim            #+#    #+#             */
/*   Updated: 2020/10/24 15:31:03 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putdiv(char *argv)
{
	//char **arr;
	char *ans;
	int a;
	//int i;

	a = 0;
	ans = (char*)malloc(sizeof(char)*16);

	while (a <= 31)
	{
		if (*argv == '1')
		{
			*ans = '4';
			write(1, &ans, 1);
		}
		argv++;
		ans++;
		a++;
	}
	/*arr = (char **)malloc(sizeof(char*)*4);
	while (a < 4)
	{
		arr[a] = (char*)malloc(sizeof(char)*8);
		a++;
	}*/
	//i = 0;

	/*while (a < 31)               4개씩 출력하는 부분
	{
		*ans = *argv;
		write(1, ans, 1);
		if (a ==  6 || a == 14 || a == 22)
		{
			write(1, "\n", 1);
			argv++;
			a++;
		}
		argv++;
		a++;
	}*/
	

	/*while (a < 4)
	{
		free(arr[a]);
		a++;
	}*/
	free(ans);
}

int		main(int argc, char **argv)
{
	while (argc == 2)
	{
		ft_putdiv(argv[1]);
		argc++;
	}
	return (0);
}
