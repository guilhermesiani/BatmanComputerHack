#include "CharacterBuilder.hpp"
#include "Paladin.hpp"

void CharacterBuilder::buildPaladin()
{
    _character = new Paladin;
};

void CharacterBuilder::buildChest(int durability)
{
    Chest* chest = new Chest(durability);
    _character->setChest(chest);
};

void CharacterBuilder::buildHelm(int durability)
{
    Helm* helm = new Helm(durability);
    _character->setHelm(helm);
};

void CharacterBuilder::buildSkill(int level)
{
    if (level == 1) {
        Fireball* skill = new Fireball();
        _character->setSkill(skill);
        return;
    }
    Lightning* skill = new Lightning();
    _character->setSkill(skill);
};

Character* CharacterBuilder::getCharacter()
{
    return _character;
};
