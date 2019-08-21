#ifndef Paladin_hpp
#define Paladin_hpp

#include "Character.hpp"
#include <string>

class Paladin: public Character
{
    std::string _name = "Paladin";
    int _vitality = 0;
    Chest* _chest;
    Helm* _helm;
    Skill* _skill;
public:
    void setName(std::string name);
    std::string getName();
    void increaseVitality(int value);
    void decreaseVitality(int value);
    int getVitality();
    void setChest(Chest* value);
    Chest* getChest();
    void setHelm(Helm* value);
    Helm* getHelm();
    void dropChest();
    void dropHelm();
    void setSkill(Skill* value);
    Skill* getSkill();
};

#endif