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

std::string		Contact::get_dsec(void) const
{
	return  (this->_dsec);
}

void			Contact::set_fname(std::string _fname)
{
	this->_fname = _fname;
}

void			Contact::set_lname(std::string _lname)
{
	this->_lname = _lname;
}

void			Contact::set_nname(std::string _nname)
{
	this->_nname = _nname;
}

void			Contact::set_pnum(std::string _pnum)
{
	this->_pnum = _pnum;
}

void			Contact::set_dsec(std::string _dsec)
{
	this->_dsec = _dsec;
}
