#include <iostream>

int	main()
{
	int	lucky_number;
	int	user_input;

	lucky_number = 3;
	std::cout << "what is number?" << std::endl;

	while (1)
	{
		std::cout << "input : ";
		std::cin >> user_input;
		if (lucky_number == user_input)
		{
			std::cout << "it's true" << std::endl;
			break;
		}
		else
			std::cout << "it's not true. retry" << std::endl;
	}

/*	int	i;
	int	sum;

	i = -1;
	sum = 0;
	while (++i <= 10)
		sum += i;

	std::cout << "sum : " << sum << std::endl;*/

/*	std::cout << "Hello, World!!!" << std::endl
		  << "my name is "
		  << "daekim" << std::endl;*/
	return 0;
}

