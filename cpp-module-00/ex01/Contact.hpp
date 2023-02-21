#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define RST "\033[0m"

class	Contact
{
	int			index;
	std::string	_fname;
	std::string	_lname;
	std::string	_nname;
	std::string	_pnum;
	public:
		Contact(void);
		~Contact(void);
		std::string get_fname(void) const;
		std::string get_lname(void) const;
		std::string get_nname(void) const;
		std::string get_pnum(void) const;
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nname(std::string str);
		void		set_pnum(std::string str);
};

#endif