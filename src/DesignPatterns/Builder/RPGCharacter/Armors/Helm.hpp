#ifndef Helm_hpp
#define Helm_hpp

#include "Armor.hpp"
#include <string>

class Helm: public Armor
{
    std::string name = "Cloth Helm";
public:
    int getDamage();
};

#endif