#include "../../../catch.hpp"

#include "../../../../src/DesignPatterns/Builder/RPGCharacter/Paladin.cpp"

TEST_CASE("Testing RPG Character Paladin") {
    Paladin paladin;
    // ChestArmor ChestArmor;
    // Helm Helm;

    SECTION("Testing set and get name with validation") {
        CHECK_THROWS_WITH(paladin.setName("Seth Martin"), "The name must not have spaces");
        paladin.setName("SethMartin");
        CHECK(paladin.getName() == "SethMartin");
    }

    SECTION("Testing manage vitality") {
        paladin.increaseVitality(26);
        CHECK(paladin.getVitality() == 26);
        paladin.increaseVitality(24);
        CHECK(paladin.getVitality() == 50);
        paladin.decreaseVitality(10);
        CHECK(paladin.getVitality() == 40);
    }

    // SECTION("Testing add chest armor") {
    //     paladin.addChestArmor(rpgChestArmor);
    // }

    // SECTION("Testing drop chest armor") {
    //     paladin.dropChestArmor();
    // }

    // SECTION("Testing add helm") {
    //     paladin.addHelm(rpgHelm);
    // }

    // SECTION("Testing drop helm") {
    //     paladin.dropHelm();
    // }

    // SECTION("Testing set skill") {
    //     paladin.setSkill(rpgFireBallSkill);
    // }
}