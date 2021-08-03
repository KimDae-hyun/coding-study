#include <iostream>

int	main()
{
	int	user_input;

	std::cout << "My information" << std::endl;
	std::cout << "1. Name" << std::endl;
	std::cout << "2. Age" << std::endl;
	std::cout << "3. Sex" << std::endl;
	std::cin >> user_input;

	switch (user_input)
	{
		case 1:
			std::cout << "daekim" << std::endl;
			break;
		case 2:
			std::cout << "100" << std::endl;
			break;
		case 3:
			std::cout << "Male" << std::endl;
			break;
		default:
			std::cout << "nothing" << std::endl;
			break;
	}
	return (0);
}
