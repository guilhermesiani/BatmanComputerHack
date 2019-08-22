#ifndef TextDocument_hpp
#define TextDocument_hpp

#include "Document.hpp"

class TextDocument
{
    std::string _title, _content;
public:
    TextDocument(std::string title, std::string content);
    std::string getTitle();
    std::string getContent();
    TextDocument* clone();
};

#endif