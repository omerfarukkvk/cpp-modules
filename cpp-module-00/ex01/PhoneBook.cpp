#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	std::cout << "Welcome to PhoneBook!!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
}

PhoneBook	PhoneBook::_add(PhoneBook book)
{
	book = ft_set_add(book, "first name");
	book = ft_set_add(book, "last name");
	book = ft_set_add(book, "nickname");
	book = ft_set_add(book, "phone number");
	book = ft_set_add(book, "darkest secret");
	book._index++;
	return (book);
}

void	PhoneBook::_search(void)
{
}

void	PhoneBook::_print(PhoneBook book)
{
	std::cout << "first name: " << book._contactArray[book._index - 1].get_fname() << std::endl;
	std::cout << "last name: " << book._contactArray[book._index - 1].get_lname() << std::endl;
	std::cout << "nickname: " << book._contactArray[book._index - 1].get_nname() << std::endl;
	std::cout << "phone number: " << book._contactArray[book._index - 1].get_pnum() << std::endl;
	std::cout << "darkest secret: " << book._contactArray[book._index - 1].get_dsec() << std::endl;
}
