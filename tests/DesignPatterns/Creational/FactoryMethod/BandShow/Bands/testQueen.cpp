#include "../../../../../catch.hpp"

#include "../../../../../../src/DesignPatterns/Creational/FactoryMethod/BandShow/Bands/Queen.cpp"

TEST_CASE("Testing Queen band") {
    Queen queen;

    SECTION("Testing show starting") {
        CHECK(queen.startShow() == "Pressure, pushing down on me...");
    }
}