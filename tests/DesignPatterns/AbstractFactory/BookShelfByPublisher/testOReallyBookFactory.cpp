#include "../../../catch.hpp"

#include "../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/OReallyBookFactory.cpp"
#include "../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/PHPBooks/PHPOReallyBook.cpp"
#include "../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/JavascriptBooks/JavascriptOReallyBook.cpp"

TEST_CASE("Testing O Really Book Factory") {
    // OReallyBookFactory bookFactory;

    SECTION("Should create O Really PHP Book") {
        // CHECK(dynamic_cast<const PHPOReallyBook*>(bookFactory.makePHPBook()) != nullptr);
    }
}