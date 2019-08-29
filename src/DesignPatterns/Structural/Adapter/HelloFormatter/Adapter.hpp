#ifndef Adapter_hpp
#define Adapter_hpp

#include <string>

class Adapter
{
public:
    virtual std::string say(std::string message, std::string name) = 0;
};

#endif