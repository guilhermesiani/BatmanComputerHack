#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/AbstractFactory/BookShelfByPublisher/PHPBooks/PHPSamsBook.cpp"

TEST_CASE("Testing PHP Sams Book") {
    PHPSamsBook book;
  
    SECTION("check title") {
        CHECK(book.getTitle() == "PHP Object, Patterns and Practice");
    }

    SECTION("check author") {
        CHECK(book.getTitle() == "Matt Zandstra");
    }
}
