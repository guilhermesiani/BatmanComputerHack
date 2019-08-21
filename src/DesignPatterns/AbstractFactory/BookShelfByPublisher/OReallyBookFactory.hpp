#ifndef OReallyBookFactory_hpp
#define OReallyBookFactory_hpp

#include "BookFactory.hpp"

class OReallyBookFactory: public BookFactory
{
public:
    PHPBook* makePHPBook();
    JavascriptBook* makeJavascriptBook();
};

#endif