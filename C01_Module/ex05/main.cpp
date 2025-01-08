#include "Harl.hpp"
#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Wrong use! ./Harl \"LEVEL\"" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(argv[1]);
    return 0;
}