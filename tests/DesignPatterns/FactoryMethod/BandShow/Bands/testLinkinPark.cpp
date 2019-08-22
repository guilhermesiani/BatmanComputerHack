#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/FactoryMethod/BandShow/Bands/LinkinPark.cpp"

TEST_CASE("Testing Linkin Park band") {
    LinkinPark linkinPark;

    SECTION("Testing show starting") {
        CHECK(linkinPark.startShow() == "But in the end, it doesn't even matter...");
    }
}