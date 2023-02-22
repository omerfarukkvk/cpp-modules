#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	std::cout << "Welcome to PhoneBook!!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::_add(PhoneBook book)
{
	book = ft_set_add(book, "first name");
	book = ft_set_add(book, "last name");
	book = ft_set_add(book, "nickname");
	book = ft_set_add(book, "phone number");
	book = ft_set_add(book, "darkest secret");
}

void	PhoneBook::_search(void)
{

}

void	PhoneBook::_print(Contact contact)
{
	(void)contact;
	std::cout << "first name: " << this->_contactArray[0].get_fname() << std::endl;
	std::cout << "last name: " << this->_contactArray[0].get_lname() << std::endl;
	std::cout << "nickname: " << this->_contactArray[0].get_nname() << std::endl;
	std::cout << "phone number: " << this->_contactArray[0].get_pnum() << std::endl;
	std::cout << "darkest secret: " << this->_contactArray[0].get_dsec() << std::endl;
}
