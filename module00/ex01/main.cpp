#include <iostream>
#include <string>

/*
    std::cout << "|---------|----------|----------|----------|" << std::endl;
    std::cout << "|  index  |first name|last name |nick name |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;
*/

/*
The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields
*/

std::string GetUpperCase(std::string s)
{
    for (char &c : s)
    {
        if (c >= 'a' && c <= 'z')
            c = c - 32;
    }
    return (s);
}

int main()
{
    std::string cmd;
    while (true)
    {
        std::cout << "Please enter 'ADD', 'SEARCH' or 'EXIT': ";
        std::getline(std::cin, cmd);
        if (GetUpperCase(cmd) == "ADD")
        {
            std::cout << "ADD" << std::endl;
        }
        else if (GetUpperCase(cmd) == "SEARCH")
        {
            std::cout << "SEARCH" << std::endl;
        }
        else if (GetUpperCase(cmd) == "EXIT")
        {
            std::cout << "Program has finished !!" << std::endl;
            break;
        }
    }
    return (0);
}