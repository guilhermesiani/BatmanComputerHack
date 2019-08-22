#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Creational/Builder/RPGCharacter/CharacterBuilder.cpp"

TEST_CASE("Testing RPG Character Builder") {
    CharacterBuilder builder;

    SECTION("Testing build a complete Palading character") {
        builder.buildPaladin();
        builder.buildChest(55);
        builder.buildHelm(80);
        builder.buildSkill(2);
        Character* character = builder.getCharacter();
        CHECK(dynamic_cast<const Paladin*>(character) != nullptr);
        CHECK(character->getChest()->getDurability() == 55);
        CHECK(character->getHelm()->getDurability() == 80);
        CHECK(character->getSkill()->damage() == 27);
        character->setName("MortinMoon");
        CHECK(character->getName() == "MortinMoon");
    }
}