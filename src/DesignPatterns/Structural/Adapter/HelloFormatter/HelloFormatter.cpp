#include "HelloFormatter.hpp"

void HelloFormatter::setFor(std::string value)
{
    name = value;
};

std::string HelloFormatter::print(std::string message)
{
    return message + ", " + name;
};