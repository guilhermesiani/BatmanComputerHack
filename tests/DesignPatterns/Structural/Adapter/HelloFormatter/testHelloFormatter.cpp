#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Structural/Adapter/HelloFormatter/HelloFormatter.cpp"

TEST_CASE("Testing Hello Formatter") {
    SECTION("Testing Hello Formatter returns hello to anything") {
        HelloFormatter* formatter = new HelloFormatter;
        formatter->setFor("Guilherme");
        CHECK(formatter->print("Hello") == "Hello, Guilherme");
    }
}