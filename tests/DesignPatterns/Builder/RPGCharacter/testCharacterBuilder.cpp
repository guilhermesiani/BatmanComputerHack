#include "../../../catch.hpp"

#include "../../../../src/DesignPatterns/Builder/RPGCharacter/CharacterBuilder.cpp"

TEST_CASE("Testing RPG Character Builder") {
    CharacterBuilder builder;

    SECTION("Testing build a complete Palading character") {
        builder.buildPaladin();
        builder.buildChest(55);
        builder.buildHelm(80);
        builder.buildSkill(2);
        CHECK(dynamic_cast<const Paladin*>(builder.getCharacter()) != nullptr);
    }
}