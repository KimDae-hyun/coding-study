/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:43:41 by daekim            #+#    #+#             */
/*   Updated: 2020/10/27 01:45:45 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_small(char *str)
{
	char *a;

	a = str;
	if (*(str - 1) >= 'a' && *(str - 1) <= 'z')
	{
	}
	else if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
	{
	}
	else if (*(str - 1) >= '0' && *(str - 1) <= '9')
	{
	}
	else
		*str = *str - 32;
	return (a);
}

char	*ft_large(char *str)
{
	char *b;

	b = str;
	if (*(str - 1) >= 'a' && *(str - 1) <= 'z')
		*str = *str + 32;
	else if (*(str - 1) >= 'A' && *(str - 1) <= 'Z')
		*str = *str + 32;
	else if (*(str - 1) >= '0' && *(str - 1) <= '9')
		*str = *str + 32;
	return (b);
}

char	*ft_strcapitalize(char *str)
{
	char *c;

	c = str;
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	str++;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			ft_small(str);
		else if (*str >= 'A' && *str <= 'Z')
			ft_large(str);
		str++;
	}
	return (c);
}
