#include "../../../../../catch.hpp"

#include "../../../../../../src/DesignPatterns/Creational/Builder/RPGCharacter/Skills/Lightning.cpp"

TEST_CASE("Testing RPG Character Skill Lightning") {
    Lightning lightning;
    SECTION("Testing skill damage") {
        CHECK(lightning.damage() == 27);
    }
}