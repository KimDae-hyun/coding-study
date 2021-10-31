/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:27:36 by daekim            #+#    #+#             */
/*   Updated: 2020/11/05 02:25:29 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *str)
{
	char		*dest;
	int			i;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str			*str;

	if (!(str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	if (ac < 1)
		return (0);
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
