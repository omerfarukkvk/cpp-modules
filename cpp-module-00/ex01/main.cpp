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
			if (book._index == 8)
			{
				std::cout << RED "PhoneBook is full!!" RST << std::endl;
				std::cout << RED "If you add a new contact, the latest one will be deleted." RST << std::endl;
			}
			book = book._add(book);
		}
		else if (str == "SEARCH")
		{
			book._print(book);
		}
		else if (str == "EXIT")
			exit (1);
		else
			print_cmd();
	}
	return 0;
}
