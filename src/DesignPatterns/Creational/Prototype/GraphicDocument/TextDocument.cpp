#include "TextDocument.hpp"

TextDocument::TextDocument(std::string title, std::string content)
{
    _title = title;
    _content = content;
};

std::string TextDocument::getTitle()
{
    return _title;
};

std::string TextDocument::getContent()
{
    return _content;
};

TextDocument* TextDocument::clone()
{
    return new TextDocument(*this);
};