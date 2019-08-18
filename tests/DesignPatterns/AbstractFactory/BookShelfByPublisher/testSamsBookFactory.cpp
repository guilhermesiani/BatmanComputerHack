#include "../../../catch.hpp"

#include "../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/SamsBookFactory.cpp"

TEST_CASE("Testing Sams Book Factory") {
    SamsBookFactory bookFactory;

    SECTION("Should make an instance of PHPSamsBook") {
        CHECK(dynamic_cast<const PHPSamsBook*>(bookFactory.makePHPBook()) != nullptr);
    }

    SECTION("Should make an instance of JavascriptSamsBook") {
        CHECK(dynamic_cast<const JavascriptSamsBook*>(bookFactory.makeJavascriptBook()) != nullptr);
    }
}