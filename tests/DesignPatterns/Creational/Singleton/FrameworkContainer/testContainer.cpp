#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Creational/Singleton/FrameworkContainer/Container.cpp"

TEST_CASE("Testing Framework Standard Container") {
    SECTION("Testing getting instance of itself") {
        Container* container = Container::getInstance();
        Container* otherContainer = Container::getInstance();
        CHECK(container == otherContainer);
    }
}