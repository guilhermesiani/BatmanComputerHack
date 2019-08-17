#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/JavascriptBooks/JavascriptOReallyBook.cpp"

TEST_CASE("Testing PHP OReally Book") {
    JavascriptOReallyBook book;
  
    SECTION("check title") {
        CHECK(book.getTitle() == "The Best of Javascript");
    }

    SECTION("check author") {
        CHECK(book.getTitle() == "Douglas Crockford");
    }
}
