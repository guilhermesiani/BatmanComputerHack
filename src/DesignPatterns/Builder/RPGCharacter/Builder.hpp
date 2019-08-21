#ifndef Builder_hpp
#define Builder_hpp

#include "Character.hpp"

class Builder
{
public:
    virtual void buildPaladin() = 0;
    virtual void buildChest(int durability) = 0;
    virtual void buildHelm(int durability) = 0;
    virtual void buildSkill(int level) = 0;
    virtual Character* getCharacter() = 0;
};

#endif