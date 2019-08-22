#ifndef BookFactory_hpp
#define BookFactory_hpp

#include "PHPBooks/PHPBook.hpp"
#include "JavascriptBooks/JavascriptBook.hpp"

class BookFactory
{
public:
    virtual PHPBook* makePHPBook() = 0;
    virtual JavascriptBook* makeJavascriptBook() = 0;
};

#endif