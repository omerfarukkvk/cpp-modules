#include "Contact.hpp"
#include "PhoneBook_utils.hpp"

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