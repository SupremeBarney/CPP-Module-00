#ifndef CONTACT_CLASS
# define CONTACT_CLASS

# include <iostream>

class Contact
{
private:

    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

public:

    Contact();
    ~Contact();
    
    std::string	getfirst_name(void) const;
    std::string	getlast_name(void) const;
    std::string	getnickname(void) const;
    std::string	getphone_number(void) const;
    std::string getdarkest_secret(void) const;
    void		setfirst_name(std::string str);
    void		setlast_name(std::string str);
    void		setnickname(std::string str);
    void		setphone_number(std::string str);
    void		setdarkest_secret(std::string str);
	Contact		create_new_contact(void);
};

#endif