#ifndef SamsBookFactory_hpp
#define SamsBookFactory_hpp

#include "PHPBooks/PHPBook.hpp"
#include "JavascriptBooks/JavascriptBook.hpp"
#include "BookFactory.hpp"

class SamsBookFactory: public BookFactory
{
public:
    PHPBook* makePHPBook();
    JavascriptBook* makeJavascriptBook();
};

#endif