#ifndef CharacterBuilder_hpp
#define CharacterBuilder_hpp

#include "Builder.hpp"

class CharacterBuilder: public Builder
{
private:
    Character* _character;
public:
    void buildPaladin();
    void buildChest(int durability);
    void buildHelm(int durability);
    void buildSkill(int level);
    Character* getCharacter();
};

#endif