#include <iostream>
#include <string>
#include "Command.hpp"
#include <vector>

class CommandProcessor
{
public:
    std::vector<Command> commands;
    void Process();
   // Command Find();
    //Command& Find();
    //Command* Find();
};
