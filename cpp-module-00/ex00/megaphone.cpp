#include <iostream>

int main(int ac, char **av)
{
	int j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; i < ac; i++)
		{
			for(int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}