#ifndef DocumentPrototypeFactory_hpp
#define DocumentPrototypeFactory_hpp

#include "DocumentFactory.hpp"

class DocumentPrototypeFactory: public DocumentFactory
{
public:
    DocumentPrototypeFactory(TextDocument* textDocument);
    TextDocument* makeTextDocument();
private:
    TextDocument* _textDocument;
};

#endif