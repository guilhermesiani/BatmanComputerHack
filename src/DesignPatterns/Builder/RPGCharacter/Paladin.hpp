#ifndef Paladin_hpp
#define Paladin_hpp

#include "Character.hpp"
#include <string>

class Paladin: public Character
{
    std::string name = "NoNamed";
    int vitality = 0;
public:
    void setName(std::string name);
    std::string getName();
    void increaseVitality(int value);
    void decreaseVitality(int value);
    int getVitality();
};

#endif