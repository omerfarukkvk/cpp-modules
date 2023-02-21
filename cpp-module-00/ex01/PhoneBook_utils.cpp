#include "PhoneBook.hpp"

void	ft_print_add(PhoneBook book, std::string name)
{
	std::string str;

	std::cout << "Please enter" << name << ": ";
	std::cin >> str;
	if (str == "")
	{
		std::cout << RED "Cannot be empty!!" RST << std::endl;
		ft_print_add(book, name);
	}
	if (name == "first name")
		book._contactArray[book._index].set_fname(str);
	else if (name == "last name")
		book._contactArray[book._index].set_lname(str);
	else if (name == "nickname")
		book._contactArray[book._index].set_nname(str);
	else if (name == "phone number")
		book._contactArray[book._index].set_pnum(str);
	else if (name == "darkest secret")
		book._contactArray[book._index].set_dsec(str);
	
}