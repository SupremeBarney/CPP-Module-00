#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
std::string Contact::getfirst_name(void) const
{
    return this->_first_name;
}

void	Contact::setfirst_name(std::string str)
{
    this->_first_name = str;
    return ;
}

std::string Contact::getlast_name(void) const
{
    return this->_last_name;
}

void	Contact::setlast_name(std::string str)
{
    this->_last_name = str;
}

std::string Contact::getnickname(void) const
{
    return this->_nickname;
}

void	Contact::setnickname(std::string str)
{
    this->_nickname = str;
    return ;
}

std::string Contact::getphone_number(void) const
{
    return this->_phone_number;
}

void	Contact::setphone_number(std::string str)
{
    this->_phone_number = str;
    return ;
}

std::string Contact::getdarkest_secret(void) const
{
    return this->_darkest_secret;
}

void	Contact::setdarkest_secret(std::string str)
{
    this->_darkest_secret = str;
    return ;
}
Contact	Contact::create_new_contact(void)
{
	Contact	new_contact;
	std::string	first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

	while (first_name.empty())
	{
		std::cout << "First name : ";
		std::getline(std::cin, first_name);
		if (first_name.empty())
			std::cout << "Please, enter the first name" << std::endl;
	} 
	while (last_name.empty())
	{
		std::cout << "Last name : ";
		std::getline(std::cin, last_name);
		if (last_name.empty())
			std::cout << "Please, enter the last name" << std::endl;
	} 
	while (nickname.empty())
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
		if (nickname.empty())
			std::cout << "Please, enter the nickname" << std::endl;
	} 
	while (phone_number.empty())
	{
		std::cout << "Phone Number : ";
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
			std::cout << "Please, enter the phone number" << std::endl;
	} 
	while (darkest_secret.empty())
	{
		std::cout << "darkest secret : ";
		std::getline(std::cin, darkest_secret);
		if (darkest_secret.empty())
			std::cout << "Please, enter his darkest secret" << std::endl;
	} 
	new_contact.setfirst_name(first_name);
	new_contact.setlast_name(last_name);
	new_contact.setnickname(nickname);
	new_contact.setphone_number(phone_number);
	new_contact.setdarkest_secret(darkest_secret);
	return (new_contact);
}
