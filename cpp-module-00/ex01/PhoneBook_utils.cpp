#include "PhoneBook.hpp"

PhoneBook	ft_set_add(PhoneBook book, std::string name)
{
	std::string str;

	std::cout << GREEN "Please enter " << name << ": " RST;
	std::cin >> str;
	while (!(str.size() > 0))
	{
		std::cout << RED "Cannot be empty!!" RST << std::endl;
		ft_set_add(book, name);
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
	return (book);
}
