#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class Phonebook
{
    public:
        static const int      _maxContacts = 8;
    private:
        int             _Index;
        Contact         _contacts[_maxContacts];
    public:
        Phonebook();
        int     getIndex();
        void    addContact();
        void    searchContact();
        void    displayContacts();
        void    displayContactDetails(int index);
};

#endif

