#include <iostream>

/*int	change_val(int *p)
{
	*p = 3;

	return (0);
}*/

int	function()
{
	int a;

	a = 5;
	return (a);
}

int	main()
{
	const int &c = function();

	std::cout << "c : " << c << std::endl;
	/*
	int	a;
	int &another_a = a;

	a = 3;
	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
*/
/*	int	number;

	number = 5;
	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;*/
	return (0);
}
