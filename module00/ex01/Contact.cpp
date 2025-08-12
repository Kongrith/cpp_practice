#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
    this->firstname = firstname;
}

void Contact::set_lastname(std::string lastname)
{
    this->lastname = lastname;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phone(std::string phone)
{
    this->phone_number = phone;
}

void Contact::set_secret(std::string secret)
{
    this->darkest_secret = secret;
}

std::string Contact::get_firstname(void)
{
    return (this->firstname);
}

std::string Contact::get_lastname(void)
{
    return (this->lastname);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}