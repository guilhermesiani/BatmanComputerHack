#ifndef RPGCharacter_hpp
#define RPGCharacter_hpp

#include <string>

class RPGCharacter
{
    std::string name = "NoNamed";
    int vitality = 0, strength = 0, mana = 0, dexterity = 0;
public:
    void setName(std::string name);
    std::string getName(std::string name);
    void setVitality(int name);
    int getVitality(int name);
    void setName(int name);
    int getName(int name);
    void setName(int name);
    int getName(int name);
    void setName(int name);
    int getName(int name);
    std::string getStats();
    std::string getStatus();
};

#endif