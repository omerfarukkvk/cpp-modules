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
	ft_print_add(book, "first name");
	ft_print_add(book, "last name");
	ft_print_add(book, "nickname");
	ft_print_add(book, "phone number");
	ft_print_add(book, "darkest secret");
}

void	PhoneBook::_search(void)
{

}

void	PhoneBook::_print(Contact contact)
{
	std::cout << "first name: " << contact.get_fname() << std::endl;
	std::cout << "last name: " << contact.get_lname() << std::endl;
	std::cout << "nickname: " << contact.get_nname() << std::endl;
	std::cout << "phone number: " << contact.get_pnum() << std::endl;
	std::cout << "darkest secret: " << contact.get_dsec() << std::endl;
}