#include "Paladin.hpp"

void Paladin::setName(std::string value)
{
    if (value.find(" ") != std::string::npos) {
        throw "The name must not have spaces";
    }
    name = value;
};

std::string Paladin::getName()
{
    return name;
};

void Paladin::increaseVitality(int value)
{
    vitality = vitality + value;
};

void Paladin::decreaseVitality(int value)
{
    vitality = vitality - value;
};

int Paladin::getVitality()
{
    return vitality;
};