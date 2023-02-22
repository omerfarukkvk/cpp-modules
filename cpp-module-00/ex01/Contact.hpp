#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define GREEN "\033[32m"
# define RED "\033[31m"
# define RST "\033[0m"

class	Contact
{
	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_pnum;
		std::string	_dsec;
	public:
		Contact(void);
		~Contact(void);
		std::string get_fname(void) const;
		std::string get_lname(void) const;
		std::string get_nname(void) const;
		std::string get_pnum(void) const;
		std::string get_dsec(void) const;
		void		set_fname(std::string _fname);
		void		set_lname(std::string _lname);
		void		set_nname(std::string _nname);
		void		set_pnum(std::string _pnum);
		void		set_dsec(std::string _dsec);
};

#endif
