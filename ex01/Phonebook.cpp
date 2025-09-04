#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    _Index = 0;
}

int Phonebook::getIndex()
{
    return _Index;
}

bool isOnlySpaces(std::string str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (!(str[i] >= 9 && str[i] <= 13) && str[i] != 32)
            return (false);
        i++;
    }
    return (true);
}

void Phonebook::addContact()
{
    int i;

    if (_Index >= _maxContacts)
        i = _Index % _maxContacts;
    else
        i = _Index;

    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    while(input.empty() || isOnlySpaces(input))
    {
        std::cout << "First name cannot be empty and only whitespace! Try again: ";
        std::getline(std::cin, input);
    }
    _contacts[i].set_fname(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    while(input.empty() || isOnlySpaces(input))
    {
        std::cout << "Last name cannot be empty and only whitespace! Try again: ";
        std::getline(std::cin, input);
    }
    _contacts[i].set_lname(input);

    std::cout << "Enter nick name: ";
    std::getline(std::cin, input);
    while(input.empty() || isOnlySpaces(input))
    {
        std::cout << "Nick name cannot be empty and only whitespace! Try again: ";
        std::getline(std::cin, input);
    }
    _contacts[i].set_nickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    while(input.empty() || isOnlySpaces(input))
    {
        std::cout << "Phone number cannot be empty and only whitespace! Try again: ";
        std::getline(std::cin, input);
    }
    _contacts[i].set_phonenbr(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    while(input.empty() || isOnlySpaces(input))
    {
        std::cout << "Darkest secret cannot be empty and only whitespace! Try again: ";
        std::getline(std::cin, input);
    }
    _contacts[i].set_darksecret(input);

    _Index++;
}

void Phonebook::displayContacts()
{
    int totalContacts;
    int i;

    i = 0;
    if (_Index < _maxContacts)
        totalContacts = _Index;
    else
        totalContacts = _maxContacts;
    std::cout << "     Index|First Name| Last Name|   Nickname" << std::endl;
    while(i < totalContacts)
    {
        i++;
    }
}