#ifndef OReallyBookFactory_hpp
#define OReallyBookFactory_hpp

#include "PHPBooks/PHPBook.hpp"
#include "JavascriptBooks/JavascriptBook.hpp"
#include "BookFactory.hpp"

class OReallyBookFactory: public BookFactory
{
public:
    PHPBook* makePHPBook();
    JavascriptBook* makeJavascriptBook();
};

#endif