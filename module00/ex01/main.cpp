#include "main.hpp"

static int is_valid_number(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

std::string GetUpperCase(std::string s)
{
    for (std::string::size_type i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - ('a' - 'A');
    }
    return (s);
}

void searchInfoHandler(PhoneBook phonebook)
{
    int id;
    std::string str;
    while (1)
    {
        std::cout << "Please enter #ID [1 to 8]: ";
        std::getline(std::cin, str);
        if (is_valid_number(str))
        {
            id = std::atoi(str.c_str());
            if (1 <= id && id <= MAX_CONTACTS)
            {
                int num_record = phonebook.get_num_record();
                if (id <= num_record)
                {
                    phonebook.show_contact(id);
                    break;
                }
                else
                {
                    if (num_record == 0)
                    {
                        std::cout << "[Error] the contact information has empty !!" << std::endl;
                        std::cout << std::endl;
                        break;
                    }
                    else
                        std::cout << "[Error] the contact information has only " << num_record << " data !!" << std::endl;
                }
            }
            else
                std::cout << "[Error] The #ID is range 1 to 8 !!" << std::endl;
        }
        else
            std::cout << "[Error] The #ID should be a number !!" << std::endl;
    }
}

void field_handler(std::string msg, std::string &info, int activate)
{
    bool logic1 = true;
    bool logic2 = true;
    do
    {
        std::cout << msg << ": ";
        std::getline(std::cin, info);
        logic1 = info.empty();
        if (activate)
            logic2 = !is_valid_number(info);
        if (logic1)
            std::cout << "[Error] The " << msg << " can not empty !!" << std::endl;
        else if (logic2 && activate)
            std::cout << "[Error] The phone number should be all number !!" << std::endl;
        else if (info.length() != 10 && activate)
            std::cout << "[Error] The phone number should be 10-digit number !!" << std::endl;
    } while (logic1 || (logic2 && activate) || (info.length() != 10 && activate));
}

void addInfoHandler(PhoneBook &phonebook)
{
    std::string info[5];
    std::cout << std::endl;
    std::cout << "Please enter your contact information:" << std::endl;
    field_handler("firstname", info[0], 0);
    field_handler("lastname", info[1], 0);
    field_handler("nickname", info[2], 0);
    field_handler("phone number", info[3], 1);
    field_handler("your secret", info[4], 0);
    phonebook.add_contact(info);
}

int main()
{
    std::string cmd;
    PhoneBook phonebook;
    while (true)
    {
        std::cout << "Please enter command ['ADD','SEARCH','EXIT']: ";
        std::getline(std::cin, cmd);
        if (GetUpperCase(cmd) == "ADD")
            addInfoHandler(phonebook);
        else if (GetUpperCase(cmd) == "SEARCH")
            searchInfoHandler(phonebook);
        else if (GetUpperCase(cmd) == "EXIT")
        {
            std::cout << "Program has finished !!" << std::endl;
            break;
        }
    }
    return (0);
}