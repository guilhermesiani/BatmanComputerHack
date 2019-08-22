#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Creational/FactoryMethod/BandShow/BandFactory.cpp"

TEST_CASE("Testing Band Factory") {
    BandFactory bandFactory;

    SECTION("Testing make Linkin Park Band") {
        CHECK(dynamic_cast<const LinkinPark*>(bandFactory.makeBand("Linkin Park")) != nullptr);
    }

    SECTION("Testing make Linkin Park Band") {
        CHECK(dynamic_cast<const Queen*>(bandFactory.makeBand("Queen")) != nullptr);
    }
}