#ifndef HelloFormatter_hpp
#define HelloFormatter_hpp

#include "Formatter.hpp"

class HelloFormatter: public Formatter
{
    std::string name;
public:
    void setFor(std::string value);
    std::string print(std::string message);
};

#endif