#include "AdapterHelloFormatter.hpp"

AdapterHelloFormatter::AdapterHelloFormatter(Formatter* formatter)
{
    _formatter = formatter;
};

std::string AdapterHelloFormatter::say(std::string message, std::string name)
{
    _formatter->setFor(name);
    return _formatter->print(message);
};