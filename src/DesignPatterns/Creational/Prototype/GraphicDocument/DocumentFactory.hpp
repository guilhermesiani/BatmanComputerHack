#ifndef DocumentFactory_hpp
#define DocumentFactory_hpp

#include "TextDocument.hpp"

class DocumentFactory
{
public:
    virtual TextDocument* makeTextDocument() = 0;
};

#endif