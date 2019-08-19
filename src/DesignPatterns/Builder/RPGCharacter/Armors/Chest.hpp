#ifndef Chest_hpp
#define Chest_hpp

#include "Armor.hpp"
#include <string>

class Chest: public Armor
{
    std::string name = "Steel Chest";
public:
    int getDamage();
};

#endif