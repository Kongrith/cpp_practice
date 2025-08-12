#include "PhoneBook.hpp"

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
    std::string formatted_str;

    if (str.length() > 10)
    {
        str[9] = '.';
        formatted_str = str.substr(0, 10);
    }
    else
    {
        int start = 0;
        for (int i = 0; i < 10 - str.length(); i++)
        {
            formatted_str += ' ';
            start++;
        }
        for (int i = 0; i + start < 10; i++)
        {
            formatted_str += str[i];
        }
    }
    return (formatted_str);
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
    std::cout << "|" << print_format(std::to_string(id)) << "|" << firstname << "|" << lastname << "|" << nickname << "|";
    std::cout << std::endl;
    std::cout << std::endl;
}

int PhoneBook::get_num_record(void)
{
    return (this->num_record_);
}