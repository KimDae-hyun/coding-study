#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int		get_next_line(char **line)
{
	int		idx;
	int		ret;

	idx = -1;
	(*line) = malloc(16711568);
	(*line)[idx + 1] = '\0';
	while ((ret = read(0, (*line) + (++idx), 1)) > 0)
	{
		(*line)[idx + 1] = '\0';
		if ((*line)[idx] == '\n')
		{
			(*line)[idx] = '\0';
			return (1);
		}
	}
	return ((ret == -1) ? -1 : 0);
}
/*
int		main(void)
{
	char	*line;

	line = NULL;
	while (get_next_line(&line))
	{
		printf("%s\n", line);
		free (line);
	}
	printf("%s", line);
	free (line);
	line = NULL;
	return (0);
}*/
