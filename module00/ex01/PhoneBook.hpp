#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[MAX_CONTACTS];
    int index_;
    int num_record_;

public:
    PhoneBook() : index_(0), num_record_(0) {}
    void add_contact(std::string info[5]);
    void show_contact(int id);
    int get_num_record(void);
};

#endif