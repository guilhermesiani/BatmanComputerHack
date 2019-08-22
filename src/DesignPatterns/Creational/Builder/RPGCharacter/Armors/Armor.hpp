#ifndef Armor_hpp
#define Armor_hpp

class Armor
{
private:
    int durability;
public:
    Armor(int value);
    virtual int getDamage() = 0;
    void receiveDamage();
    int getDurability();
};

#endif