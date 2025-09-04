#include "Contact.hpp"

void    Contact::set_fname(std::string fname)
{
    _firstName = fname;
}

void Contact::set_lname(std::string lname)
{
    _lastName = lname;
}

void Contact::set_nickname(std::string nickname)
{
    _nickName = nickname;
}

void Contact::set_phonenbr(std::string phoneNbr)
{
    _phoneNbr = phoneNbr;
}

void Contact::set_darksecret(std::string darksecret)
{
    _darkSecret = darksecret;
}

std::string Contact::getFirstName()
{
    return _firstName;
}

std::string Contact::getLastName()
{
    return _lastName;
}

std::string Contact::getNickName()
{
    return _nickName;
}

std::string Contact::getPhoneNbr()
{
    return _phoneNbr;
}

std::string Contact::getDarkSecret()
{
    return _darkSecret;
}