#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string		Contact::get_fname(void) const
{
	return  (this->_fname);
}

std::string		Contact::get_lname(void) const
{
	return  (this->_lname);
}

std::string		Contact::get_nname(void) const
{
	return  (this->_nname);
}

std::string		Contact::get_pnum(void) const
{
	return  (this->_pnum);
}

void			Contact::set_fname(std::string str)
{
	this->_fname = str;
}

void			Contact::set_lname(std::string str)
{
	this->_lname = str;
}

void			Contact::set_nname(std::string str)
{
	this->_nname = str;
}

void			Contact::set_pnum(std::string str)
{
	this->_pnum = str;
}