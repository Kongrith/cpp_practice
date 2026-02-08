#include "PhoneBook.hpp"
#include <sstream>

static std::string int_to_string(int n)
{
    std::ostringstream oss;
    oss << n;
    return oss.str();
}

void PhoneBook::add_contact(std::string info[5])
{
    int index = index_++ % MAX_CONTACTS;
    this->contacts[index].set_firstname(info[0]);
    this->contacts[index].set_lastname(info[1]);
    this->contacts[index].set_nickname(info[2]);
    this->contacts[index].set_phone(info[3]);
    this->contacts[index].set_secret(info[4]);
    std::cout << "saved contact #ID " << index + 1 << " succesfully !!" << std::endl;
    std::cout << std::endl;
    num_record_++;
}

std::string print_format(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";

    // left-pad with spaces to width 10
    return std::string(10 - str.length(), ' ') + str;
}

void PhoneBook::show_contact(int id)
{
    std::string firstname = print_format(this->contacts[id - 1].get_firstname());
    std::string lastname = print_format(this->contacts[id - 1].get_lastname());
    std::string nickname = print_format(this->contacts[id - 1].get_nickname());
    std::cout << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|   index  |first name| last name| nick name|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "|" << print_format(int_to_string(id)) << "|" << firstname << "|" << lastname << "|" << nickname << "|";
    std::cout << std::endl;
    std::cout << std::endl;
}

int PhoneBook::get_num_record(void)
{
    return (this->num_record_);
}