#include "Armor.hpp"

Armor::Armor(int value)
{
    durability = value;
}

int Armor::getDurability()
{
    return durability;
};

void Armor::receiveDamage()
{
    int damage = getDamage();
    if (durability - damage < 0) {
        durability = 0;
        return;
    }
    durability = durability - damage;
};