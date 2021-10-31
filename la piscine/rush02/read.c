/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:11:45 by daekim            #+#    #+#             */
/*   Updated: 2020/10/31 12:59:22 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int		main()
{
	char buff[BUFF_SIZE];
	int fd;

	if(0 < (fd = open("./number.dict", O_RDONLY | O_DIRECTORY)))
	{
		read(fd, buff, BUFF_SIZE);
		puts(buff);
		close(fd);
	}
	else
	{
		printf("Dict Error\n");
	}
	return (0);
}
