#ifndef Formatter_hpp
#define Formatter_hpp

#include <string>

class Formatter
{
public:
    virtual void setFor(std::string value) = 0;
    virtual std::string print(std::string message) = 0;
};

#endif