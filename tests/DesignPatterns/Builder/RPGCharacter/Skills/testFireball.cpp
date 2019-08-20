#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Builder/RPGCharacter/Skills/Fireball.cpp"

TEST_CASE("Testing RPG Character Skill Fireball") {
    Fireball fireball;
    SECTION("Testing skill damage") {
        CHECK(fireball.damage() == 12);
    }
}