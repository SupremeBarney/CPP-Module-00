#ifndef PHONEBOOK_CLASS
#   define PHONEBOOK_CLASS

#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>
#include <sstream>

class PhoneBook
{
private:
	Contact _contacts[9];
	int     _nbContact;

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		get_nbcontact(void) const;
	void	add_contact(Contact newContact);
	void	search_contact(void);
	void	print_contacts(void);
	void	prompt_contact(void);
};

#endif
