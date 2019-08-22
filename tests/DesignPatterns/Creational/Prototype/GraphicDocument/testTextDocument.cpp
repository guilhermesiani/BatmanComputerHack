#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Creational/Prototype/GraphicDocument/TextDocument.cpp"

TEST_CASE("Testing Graphic Document") {
    SECTION("Testing params") {
        TextDocument* document = new TextDocument("Some Title", "Some Content");
        CHECK(document->getTitle() == "Some Title");
        CHECK(document->getContent() == "Some Content");
    }

    SECTION("Testing Clone Action") {
        TextDocument* document = new TextDocument("Some Title", "Some Content");
        TextDocument* document2 = document->clone();
        CHECK(document2->getTitle() == "Some Title");
        CHECK(document2->getContent() == "Some Content");
    }
}