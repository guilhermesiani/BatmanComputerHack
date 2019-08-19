#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Builder/RPGCharacter/Armors/Chest.cpp"

TEST_CASE("Testing RPG Character") {
    Chest chest;

    SECTION("Testing receive damage") {
        CHECK(chest.getDurability() == 100);
        chest.receiveDamage();
        CHECK(chest.getDurability() == 95);
    }
}