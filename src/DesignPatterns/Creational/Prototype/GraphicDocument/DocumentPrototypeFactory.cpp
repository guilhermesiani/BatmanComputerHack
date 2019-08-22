#include "DocumentPrototypeFactory.hpp"

DocumentPrototypeFactory::DocumentPrototypeFactory(TextDocument* textDocument)
{
    _textDocument = textDocument;
};

TextDocument* DocumentPrototypeFactory::makeTextDocument()
{
    return _textDocument->clone();
};