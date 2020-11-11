#include <iostream>
//include "Command.hpp"
#include "CommandProcessor.hpp"
#include "Parser.hpp"
#include "Reader.hpp"
#include "reader_web.hpp"
#include <fstream>
#include <string>

int main()
{
    std::string line;
    std::ifstream test_file;
    test_file.open ("C:/text.txt",std::ios::in);

    
    if (test_file.is_open())
    {
        while (std::getline(test_file, line))
        {
            std::cout << line << std::endl;
        }

        test_file.close();
    }
    
    else
    {
        std::cout <<"Name file not correct " <<std::endl;
    } 

}
