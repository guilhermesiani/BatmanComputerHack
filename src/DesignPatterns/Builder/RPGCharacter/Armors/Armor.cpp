#include "Armor.hpp"

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