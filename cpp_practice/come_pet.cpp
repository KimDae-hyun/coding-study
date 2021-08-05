#include <iostream>

typedef struct animal
{
	char	name[30];
	int		age;

	int		health;
	int		food;
	int		clean;
}			animal;

void	create_animal(animal *ani)
{
	std::cout << "animal's name : ";
	std::cin >> ani->name;

	std::cout << "animal's age : ";
	std::cin >> ani->age;

	ani->health = 100;
	ani->food = 100;
	ani->clean = 100;
}

void	play(animal *ani)
{
	ani->health += 10;
	ani->food -= 20;
	ani->clean -= 30;
}

void	one_day_pass(animal *ani)
{
	ani->health -= 10;
	ani->food -= 30;
	ani->clean -= 20;
}

void	show_stat(animal *ani)
{
	std::cout << ani->name << "of status" << std::endl;
	std::cout << "heath : " << ani->health << std::endl;
	std::cout << "fool : " << ani->food << std::endl;
	std::cout << "clean : " << ani->clean << std::endl;
}

int	main()
{
	animal *list[10];
	int	ani_num;
	int	input;
	int	play_with;
	int i;

	ani_num = 0;
	while (42)
	{
		std::cout << "1. animal add" << std::endl;
		std::cout << "2. animal play" << std::endl;
		std::cout << "3. animal status" << std::endl;

		int	input;
		std::cin >> input;

		switch (input)
		{
			case 1:
				list[ani_num] = new animal;
				create_animal(list[ani_num]);
				ani_num++;
				break ;
			case 2:
				std::cout << "who with play : ";
				std::cin >> play_with;
				if (play_with < ani_num)
					play(list[play_with]);
				break ;
			case 3:
				std::cout << "who show : ";
				std::cin >> play_with;
				if (play_with < ani_num)
					show_stat(list[play_with]);
				break ;
		}
		i = -1;
		while (++i != ani_num)
			one_day_pass(list[i]);
	}
	i = -1;
	while (++i != ani_num)
		delete list[i];
}
