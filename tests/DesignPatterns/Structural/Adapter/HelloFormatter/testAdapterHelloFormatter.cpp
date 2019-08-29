#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Structural/Adapter/HelloFormatter/AdapterHelloFormatter.cpp"

TEST_CASE("Testing Adapter Hello Formatter") {
    SECTION("Testing Adapter Hello Formatter returns hello to anything") {
        AdapterHelloFormatter* formatter = new AdapterHelloFormatter(new HelloFormatter);
        CHECK(formatter->say("Hello", "Guilherme") == "Hello, Guilherme");
    }
}