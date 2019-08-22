#ifndef Factory_hpp
#define Factory_hpp

#include <string>

class Factory
{
public:
    virtual Band* makeBand(std::string bandName) = 0;
}

#endif