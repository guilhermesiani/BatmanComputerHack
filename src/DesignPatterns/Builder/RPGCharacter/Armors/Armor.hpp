#ifndef Armor_hpp
#define Armor_hpp

class Armor
{
private:
    int durability = 100;
public:
    virtual int getDamage() = 0;
    void receiveDamage();
    int getDurability();
};

#endif