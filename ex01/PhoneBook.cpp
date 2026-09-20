#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_nbContact = 0;
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
	int		i;

	if (_nbContact < 8)
		_contacts[_nbContact++] = newContact;
	else
	{
		i = 0;
		while (i < 7)
		{
			_contacts[i] = _contacts[i + 1];
			i++;
		}
		_contacts[7] = newContact;
		std::cout << "Oldest contact deleted" << std::endl;
	}
	std::cout << "new Contact added" << std::endl;
}
static void	format_text(std::string str)
{
	if (str.length() > 10)
		str.replace(str.begin() + 9, str.end(), ".");
	else
		std::cout << std::right << std::setw(10);
	std::cout << str;
}

static void	print_header(void)
{
	std::string separator = "+----------+----------+----------+----------+";
	std::string h1 = "Index", h2 = "First Name", h3 = "Last Name", h4 = "Nickname";

	std::cout << separator << std::endl;
	std::cout << "|";
	format_text(h1);
	std::cout << "|";
	format_text(h2);
	std::cout << "|";
	format_text(h3);
	std::cout << "|";
	format_text(h4);
	std::cout << "|" << std::endl;
	std::cout << separator << std::endl;
}

static void	print_info(std::string info)
{
	format_text(info);
	std::cout << "|";
}
void	PhoneBook::print_contacts(void)
{
	std::string separator = "+----------+----------+----------+----------+";
	int			i;

	i = 0;
	while (i < this->_nbContact)
	{
		std::ostringstream	index;

		index << i;
		std::cout << "|";
		print_info(index.str());
		print_info(this->_contacts[i].getfirst_name());
		print_info(this->_contacts[i].getlast_name());
		print_info(this->_contacts[i].getnickname());
		std::cout << std::endl;
		i++;
	}
	if (i)
		std::cout << separator << std::endl;
}

void	PhoneBook::prompt_contact(void)
{
	std::string	index;
	int			i_index;

	std::cout << "Choose a contact to display : ";
	std::getline(std::cin, index);
	std::istringstream iss(index);
	iss >> i_index;
	while (i_index <)
	{
		/* code */
	}
	
}

void	PhoneBook::search_contact(void)
{
	print_header();
	print_contacts();
}

