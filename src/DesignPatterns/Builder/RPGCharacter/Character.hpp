#ifndef Character_hpp
#define Character_hpp

#include <string>

class Character
{
public:
    virtual void setName(std::string name) = 0;
    virtual std::string getName() = 0;
    virtual void increaseVitality(int value) = 0;
    virtual void decreaseVitality(int value) = 0;
    virtual int getVitality() = 0;
};

#endif