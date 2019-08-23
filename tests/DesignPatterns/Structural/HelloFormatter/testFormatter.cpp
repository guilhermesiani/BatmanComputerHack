#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Structural/Adapter/HelloFormatter/Formatter.cpp"

TEST_CASE("Testing Hello Formatter") {
    SECTION("Testing Formater returns hello to anything") {
        Formatter formatter = new Formatter;
        formatter.setFor("Guilherme");
        CHECK(formatter.print("Hello, ") == "Hello, Guilherme");
    }
}