#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Builder/RPGCharacter/Armors/Helm.cpp"

TEST_CASE("Testing RPG Character Armor Helm") {
    Helm helm(100);
    SECTION("Testing receive damage") {
        CHECK(helm.getDurability() == 100);
        helm.receiveDamage();
        CHECK(helm.getDurability() == 85);
    }
}