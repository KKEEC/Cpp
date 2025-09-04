#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNbr;
        std::string _darkSecret;
    public:
        void set_fname(std::string firstName);
        void set_lname(std::string lastName);
        void set_nickname(std::string nickName);
        void set_phonenbr(std::string phoneNbr);
        void set_darksecret(std::string darkSecret);

        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNbr();
        std::string getDarkSecret();
};


#endif