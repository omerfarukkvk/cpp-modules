#include "Contact.hpp"

class	PhoneBook
{
	public:
		Contact		_contactArray[8];
		int			_index;
		PhoneBook(void);
		~PhoneBook(void);
		void	_add(PhoneBook book);
		void	_search(void);
		void	_print(Contact contact);

};

PhoneBook	ft_set_add(PhoneBook book, std::string name);
