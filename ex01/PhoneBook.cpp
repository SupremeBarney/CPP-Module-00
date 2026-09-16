#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_nbContact = 1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
}

int	PhoneBook::get_nbcontact(void) const
{
	return this->_nbContact;
}

void	PhoneBook::add_contact(Contact newContact)
{
	int	i;

	_nbContact++;
	if (_nbContact <= 8)
		_contacts[_nbContact++];
	else
	{
		i = 0;
		while (i < 7)
		{
			_contacts[i] = _contacts[i + 1];
			i++;
		}
		_contacts[i] = newContact;
		_nbContact = 8;
		std::cout << "Oldest contact deleted" << std::endl;
	}
	std::cout << "new Contact added" << std::endl;
}

void	PhoneBook::search_contact(void)
{
	std::string separator = "+--------+--------+--------+--------+";
	std::string h1 = "Index", h2 = "First Name", h3 = "Last Name", h4 = "Nickname";

	std::cout << separator << std::endl;
	std::cout << 
}

void	format_text(std::string str)
{
	if (str.length > 8)
}