#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void	prompt(PhoneBook phonebook)
{
	std::string	option;
	Contact		new_contact;

	do
	{
		std::cout << "Please choose an option :" << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;
		std::cout << "Choice : ";
		std::getline(std::cin, option);
		if (option.compare("ADD") == 0)
		{
			new_contact = new_contact.create_new_contact();
			phonebook.add_contact(new_contact);
		}
		else if (option.compare("SEARCH") == 0)
			phonebook.search_contact();
	} while (option.compare("EXIT") != 0);
	
}

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;

	prompt(phonebook);
}

