#ifndef PHONEBOOK_CLASS
#   define PHONEBOOK_CLASS

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int     _nbContact;

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		get_nbcontact(void) const;
	void	add_contact(Contact newContact);
	void	search_contact(void);
};

#endif