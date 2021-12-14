#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

typedef struct s_draw
{
	int w;
	int h;
	char *back;
}			t_draw;

typedef struct s_cir
{
	char type;
	float x;
	float y;
	float r;
	char c;
}			t_cir;

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

int in_check(t_cir *c, float x, float y)
{
	float d;

	d = sqrtf((x - c->x) * (x - c->x) + (y - c->y) * (y - c->y));
	if (d - c->r <= 0.00000000)
	{
		if (d - c->r <= -1.00000000)
			return (1);
		return (2);
	}
	return (0);
}

void in_back(t_draw *d, t_cir *c, int x, int y)
{
	int check;

	check = in_check(c, (float)x, (float)y);
	if (check == 2 || (check == 1 && c->type == 'C'))
		d->back[x + y * d->w] = c->c;
	return ;
}

int in_circle(t_draw *d, t_cir *c)
{
	int x;
	int y;

	if (c->r <= 0.00000000 || (c->type != 'C' && c->type != 'c'))
		return (1);
	x = -1;
	while (++x < d->w)
	{
		y = -1;
		while (++y < d->h)
			in_back(d, c, x, y);
	}
	return (0);
}

void draw_cir(t_draw *d)
{
	int i;

	i = -1;
	while (++i < d->h)
	{
		write(1, d->back + i * d->w, d->w);
		write(1, "\n", 1);
	}
	return ;
}

int exec(FILE *file)
{
	int ret;
	t_draw d;
	t_cir c;
	
	if (!parsing(file, &d))
	{
		ret = fscanf(file, "%c %f %f %f %c\n", &c.type, &c.x, &c.y, &c.r, &c.c);
		while (ret == 5)
		{
			if (in_circle(&d, &c))
			{
				free(d.back);
				return (1);
			}
			ret = fscanf(file, "%c %f %f %f %c\n", &c.type, &c.x, &c.y, &c.r, &c.c);
		}
		if (ret == -1)
		{
			draw_cir(&d);
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
