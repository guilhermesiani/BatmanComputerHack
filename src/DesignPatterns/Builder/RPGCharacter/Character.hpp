#ifndef Character_hpp
#define Character_hpp

#include <string>
#include "Armors/Chest.hpp"
#include "Armors/Helm.hpp"
#include "Skills/Skill.hpp"
#include "Skills/Fireball.hpp"
#include "Skills/Lightning.hpp"

class Character
{
public:
    virtual void setName(std::string name) = 0;
    virtual std::string getName() = 0;
    virtual void increaseVitality(int value) = 0;
    virtual void decreaseVitality(int value) = 0;
    virtual int getVitality() = 0;
    virtual void setChest(Chest* value) = 0;
    virtual Chest* getChest() = 0;
    virtual void setHelm(Helm* value) = 0;
    virtual Helm* getHelm() = 0;
    virtual void dropChest() = 0;
    virtual void dropHelm() = 0;
    virtual void setSkill(Skill* value) = 0;
    virtual Skill* getSkill() = 0;
};

#endif