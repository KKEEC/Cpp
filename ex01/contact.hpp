#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenbr;
        std::string darkestsecret;
    public:
        void set_fname(std::string fname);
        void set_lname(std::string lname);
        void set_nickname(std::string nickname);
        void set_phonenbr(std::string phonenbr);
        void set_darksecret(std::string darksecret);
        std::string get_fname()
        {
            return (this->firstname);
        }
        std::string get_lname()
        {
            return (this->lastname);
        }
        std::string get_nickname()
        {
            return (this->nickname);
        }
        std::string get_phonenbr()
        {
            return (this->phonenbr);
        }
        std::string get_darksecret()
        {
            return (this->darkestsecret);
        }
};

void    Contact::set_fname(std::string fname)
{
    std::cout << fname << std::endl;
}
void Contact::set_lname(std::string lname)
{
    std::cout << lname << std::endl;
}
void Contact::set_nickname(std::string nickname)
{
    std::cout << nickname << std::endl;   
}

void Contact::set_phonenbr(std::string lname)
{
    std::cout << phonenbr << std::endl;
}
void Contact::set_darksecret(std::string darksecret)
{
    std::cout << darksecret << std::endl;
}

#endif