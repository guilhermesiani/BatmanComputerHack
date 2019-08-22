#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Creational/AbstractFactory/BookShelfByPublisher/OReallyBookFactory.cpp"

TEST_CASE("Testing O Really Book Factory") {
    OReallyBookFactory bookFactory;

    SECTION("Should make an instance of PHPOReallyBook") {
        CHECK(dynamic_cast<const PHPOReallyBook*>(bookFactory.makePHPBook()) != nullptr);
    }

    SECTION("Should make an instance of JavascriptOReallyBook") {
        CHECK(dynamic_cast<const JavascriptOReallyBook*>(bookFactory.makeJavascriptBook()) != nullptr);
    }
}