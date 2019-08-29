#ifndef AdapterHelloFormatter_hpp
#define AdapterHelloFormatter_hpp

#include "Adapter.hpp"
#include "Formatter.hpp"
#include "HelloFormatter.hpp"

class AdapterHelloFormatter: public Adapter
{
    Formatter* _formatter;
public:
    AdapterHelloFormatter(Formatter* formatter);
    std::string say(std::string message, std::string name);
};

#endif