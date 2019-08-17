#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/PHPBooks/PHPOReallyBook.cpp"

TEST_CASE("Testing PHP OReally Book") {
    PHPOReallyBook book;
  
    SECTION("check title") {
        CHECK(book.getTitle() == "PHP - Where to start");
    }

    SECTION("check author") {
        CHECK(book.getTitle() == "Mark D'Marco");
    }
}
