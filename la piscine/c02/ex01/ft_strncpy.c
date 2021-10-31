/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:35:44 by daekim            #+#    #+#             */
/*   Updated: 2020/10/25 00:53:03 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;
	char			*b;

	b = dest;
	a = 0;
	while (a < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		a++;
	}
	while (a < n)
	{
		*dest = '\0';
		dest++;
		a++;
	}
	return (b);
}
