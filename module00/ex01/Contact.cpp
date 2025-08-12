#include "Contact.hpp"

void Contact::set_firstname(std::string firstname)
{
    this->firstname_ = firstname;
}

void Contact::set_lastname(std::string lastname)
{
    this->lastname_ = lastname;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname_ = nickname;
}

void Contact::set_phone(std::string phone)
{
    this->phone_number_ = phone;
}

void Contact::set_secret(std::string secret)
{
    this->darkest_secret_ = secret;
}

std::string Contact::get_firstname(void)
{
    return (this->firstname_);
}

std::string Contact::get_lastname(void)
{
    return (this->lastname_);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname_);
}