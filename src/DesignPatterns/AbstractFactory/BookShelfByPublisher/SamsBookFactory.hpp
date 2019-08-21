#ifndef SamsBookFactory_hpp
#define SamsBookFactory_hpp

#include "BookFactory.hpp"

class SamsBookFactory: public BookFactory
{
public:
    PHPBook* makePHPBook();
    JavascriptBook* makeJavascriptBook();
};

#endif