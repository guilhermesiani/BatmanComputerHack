#include "Paladin.hpp"

void Paladin::setName(std::string value)
{
    if (value.find(" ") != std::string::npos) {
        throw "The name must not have spaces";
    }
    _name = value;
};

std::string Paladin::getName()
{
    return _name;
};

void Paladin::increaseVitality(int value)
{
    _vitality = _vitality + value;
};

void Paladin::decreaseVitality(int value)
{
    _vitality = _vitality - value;
};

int Paladin::getVitality()
{
    return _vitality;
};

void Paladin::setChest(Chest* value)
{
    _chest = value;
};

Chest* Paladin::getChest()
{
    return _chest;
};

void Paladin::setHelm(Helm* value)
{
    _helm = value;
};

Helm* Paladin::getHelm()
{
    return _helm;
};

void Paladin::dropChest()
{
    _chest = nullptr;
};

void Paladin::dropHelm()
{
    _helm = nullptr;
};

void Paladin::setSkill(Skill* value)
{
    _skill = value;
};

Skill* Paladin::getSkill()
{
    return _skill;
};