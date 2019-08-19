#include "../../../catch.hpp"

#include "../../../../src/DesignPatterns/Builder/RPGCharacter/RPGCharacter.cpp"

TEST_CASE("Testing RPG Character") {
    RPGCharacter rpgCharacter;
    RPGChestArmor rpgChestArmor;
    RPGHelm rpgHelm;
    RPGFireBallSkill rpgFireBallSkill;
    RPGLightningSkill rpgLightningSkill;

    SECTION("Testing set and get name with validation") {
        CHECK_THROWS_WITH(rpgCharacter.setName("Seth Martin"), "The name must not have spaces");
        rpgCharacter.setName("SethMartin");
        CHECK(rpgCharacter.getName() == "SethMartin");
    }

    SECTION("Testing manage vitality") {
        rpgCharacter.increaseVitality(26);
        CHECK(rpgCharacter.getVitality() == 26);
        rpgCharacter.increaseVitality(24);
        CHECK(rpgCharacter.getVitality() == 50);
        rpgCharacter.decreaseVitality(10);
        CHECK(rpgCharacter.getVitality() == 40);
    }

    SECTION("Testing add chest armor") {
        rpgCharacter.addChestArmor(rpgChestArmor);
    }

    SECTION("Testing drop chest armor") {
        rpgCharacter.dropChestArmor();
    }

    SECTION("Testing add helm") {
        rpgCharacter.addHelm(rpgHelm);
    }

    SECTION("Testing drop helm") {
        rpgCharacter.dropHelm();
    }

    SECTION("Testing set skill") {
        rpgCharacter.setSkill();
    }
}