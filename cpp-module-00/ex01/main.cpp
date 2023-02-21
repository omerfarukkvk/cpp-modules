#include "PhoneBook.hpp"

void	print_cmd()
{
	std::cout << RED "This command is wrong!!" RST << std::endl;
	std::cout << GREEN "You can use the commands:" RST << std::endl;
	std::cout << "ADD: You can add contact on the PhoneBook." << std::endl;
	std::cout << "SEARCH: Shows existing contact's information." << std::endl;
	std::cout << "EXIT: You exit PhoneBook system." << std::endl;
}

int main(void)
{
	PhoneBook	book;
	std::string	str;

	while (1)
	{
		std::cout << GREEN "Please enter command: " RST;
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			book._add(book);
			std::cout << "index: " << book._index << std::endl;
			book._print(book._contactArray[book._index]);
			book._index++;
		}
		else if (str == "SEARCH")
		{

		}
		else if (str == "EXIT")
			exit (1);
		else
			print_cmd();
	}
	return 0;
}