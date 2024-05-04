
#include <sstream>
#include <string>
#include <iostream>

int main (int argc, char **argv)
{
    std::stringstream stm (argv[1]);
    std::string palabra;

    while (stm)
    {
        stm >> palabra;
        if (stm.fail())
            break;
        std::cout << palabra << std::endl;
    }
}
