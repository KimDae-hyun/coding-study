#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_draw
{
	int w;
	int h;
	char *back;
}			t_draw;

typedef struct s_rec
{
	char type;
	float x;
	float y;
	float w;
	float h;
	char c;
}			t_rec;

int ft_strlen(char *s)
{
	int i;
	
	i = -1;
	while (s[++i])
		;
	return (i);
}

int parsing(FILE *file, t_draw *d)
{
	int i;
	char back;

	if (fscanf(file, "%d %d %c\n", &d->w, &d->h, &back) == 3)
	{
		if (d->w < 1 || d->w > 300 || d->h < 1 || d->h > 300)
			return (1);
		d->back = (char *)calloc(d->w * d->h, sizeof(char));
		if (!d->back)
			return (1);
		i = -1;
		while (++i < d->w * d->h)
			d->back[i] = back;
		return (0);
	}
	return (1);
}

int in_check(t_rec *rec, float x, float y)
{
	if (x < rec->x || rec->x + rec->w < x || y < rec->y || rec->y + rec->h < y)
		return (0);
	if (x - rec->x < 1.00000000 || rec->x + rec->w - x < 1.00000000 || \
		y - rec->y < 1.00000000 || rec->y + rec->h - y < 1.00000000)
		return (2);
	return (1);
}

void in_back(t_draw *d, t_rec *rec, int x, int y)
{
	int check;

	check = in_check(rec, (float)x, (float)y);
	if (check == 2 || (check == 1 && rec->type == 'R'))
		d->back[x + y * d->w] = rec->c;
	return ;
}

int in_rec(t_draw *d, t_rec *rec)
{
	int x;
	int y;

	if(rec->w <= 0.00000000 || rec->h <= 0.00000000 || (rec->type != 'R' && rec->type != 'r'))
		return (1);
	x = -1;
	while (++x < d->w)
	{
		y = -1;
		while (++y < d->h)
			in_back(d, rec, x, y);
	}
	return (0);
}

void draw_rec(t_draw *d)
{
	int i;

	i = -1;
	while (++i < d->h)
		printf("%.*s\n", d->w, d->back + i * d->w); 
}

int exec(FILE *file)
{
	int ret;
	t_draw d;
	t_rec rec;

	if (!parsing(file, &d))
	{
		ret = fscanf(file, "%c %f %f %f %f %c\n", &rec.type, &rec.x, &rec.y, &rec.w, &rec.h, &rec.c);
		while (ret == 6)
		{
			if (in_rec(&d, &rec))
			{
				free(d.back);
				return (1);
			}
			ret = fscanf(file, "%c %f %f %f %f %c\n", &rec.type, &rec.x, &rec.y, &rec.w, &rec.h, &rec.c);
		}
		if (ret == -1)
		{
			draw_rec(&d);
			free(d.back);
			return (0);
		}
	}
	return (1);
}

int main(int ac, char **av)
{
	FILE *file;

	if (ac == 2)
	{
		file = fopen(av[1], "r");
		if (file && !exec(file))
			return (0);
		write(1, "Error: Operation file corrupted\n", ft_strlen("Error: Operation file corrupted\n"));
	}
	else
		write(1, "Error: argument\n", ft_strlen("Error: argument\n"));
	return (1);
}
