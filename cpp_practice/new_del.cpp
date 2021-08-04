#include <iostream>

int	main()
{
	int	arr_size;
	int *list;
	int i;

	std::cout << "array size : ";
	std::cin >> arr_size;
	list = new int[arr_size];
	i = -1;
	while (++i < arr_size)
		std::cin >> list[i];
	i = -1;
	while (++i < arr_size)
		std::cout << i << "th element of list : " << list[i] << std::endl;
	delete[] list;
	/*
	int *p;

	p = new int;
	*p = 10;

	std::cout << *p << std::endl;
	delete (p);*/
	return (0);
}
