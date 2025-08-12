#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
private:
    std::string firstname_;
    std::string lastname_;
    std::string nickname_;
    std::string phone_number_;
    std::string darkest_secret_;

public:
    void set_firstname(std::string firstname);
    void set_lastname(std::string lastname);
    void set_nickname(std::string nickname);
    void set_phone(std::string phone);
    void set_secret(std::string secret);
    std::string get_firstname(void);
    std::string get_lastname(void);
    std::string get_nickname(void);
};

#endif
