/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:29:57 by daekim            #+#    #+#             */
/*   Updated: 2020/11/04 18:07:09 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int		ft_size(int size, char **strs, char *sep)
{
	int b;
	int c;

	c = -1;
	b = 0;
	while (++c < size)
		b += ft_strlen(strs[c]);
	b += ft_strlen(sep) * (size - 1);
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return ((char *)malloc(sizeof(char) * 0));
	if (!(dest = (char *)malloc(sizeof(char) * (ft_size(size, strs, sep) + 1))))
		return (0);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				dest[k++] = sep[j++];
		}
	}
	dest[k] = '\0';
	return (dest);
}
