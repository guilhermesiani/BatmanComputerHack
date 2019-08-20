#ifndef Helm_hpp
#define Helm_hpp

#include "Armor.hpp"
#include <string>

class Helm: public Armor
{
    std::string name = "Cloth Helm";
public:
    Helm(int value);
    int getDamage();
};

#endif