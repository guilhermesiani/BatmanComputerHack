#include "../../../../../catch.hpp"

#include "../../../../../../src/DesignPatterns/Creational/AbstractFactory/BookShelfByPublisher/JavascriptBooks/JavascriptOReallyBook.cpp"

TEST_CASE("Testing Javascript OReally Book") {
    JavascriptOReallyBook book;
  
    SECTION("check title") {
        CHECK(book.getTitle() == "The Best of Javascript");
    }

    SECTION("check author") {
        CHECK(book.getAuthor() == "Douglas Crockford");
    }
}
