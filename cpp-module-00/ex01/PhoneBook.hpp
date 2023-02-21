#include "Contact.hpp"

class	PhoneBook
{
	Contact		_contactArray[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	_add(void);
		void	_search(void);
		void	_print(Contact contact);

};