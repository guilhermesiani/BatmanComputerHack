#include "../../../../../catch.hpp"

#include "../../../../../../src/DesignPatterns/Creational/AbstractFactory/BookShelfByPublisher/JavascriptBooks/JavascriptSamsBook.cpp"

TEST_CASE("Testing Javascript Sams Book") {
    JavascriptSamsBook book;
  
    SECTION("check title") {
        CHECK(book.getTitle() == "Javascript Assyncronous Programming");
    }

    SECTION("check author") {
        CHECK(book.getAuthor() == "Lisa Mendes");
    }
}
