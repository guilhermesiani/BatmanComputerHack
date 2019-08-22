#include "../../../../catch.hpp"

#include "../../../../../src/DesignPatterns/Creational/Prototype/GraphicDocument/DocumentPrototypeFactory.cpp"

TEST_CASE("Testing Graphic Document Prototype Factory") {
    SECTION("Testing Factory of Text Document") {
        std::string title = "Untitled Document";
        std::string content = "Put you content here...";
        TextDocument* originalDocument = new TextDocument(title, content);
        DocumentPrototypeFactory* factory = new DocumentPrototypeFactory(originalDocument);
        TextDocument* copyDocument = factory->makeTextDocument();
        CHECK(copyDocument->getTitle() == title);
        CHECK(copyDocument->getContent() == content);
    }
}