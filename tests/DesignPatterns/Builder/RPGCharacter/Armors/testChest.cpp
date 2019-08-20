#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Builder/RPGCharacter/Armors/Chest.cpp"
#include "../../../../../src/DesignPatterns/Builder/RPGCharacter/Armors/Armor.cpp"

TEST_CASE("Testing RPG Character Armor Chest") {
    Chest chest(100);
    SECTION("Testing receive damage") {
        CHECK(chest.getDurability() == 100);
        chest.receiveDamage();
        CHECK(chest.getDurability() == 95);
    }
}