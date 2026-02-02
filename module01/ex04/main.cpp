#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "[Error] Agruments are filename, string1, and string2 !!" << std::endl, 1);
    return (0);
}