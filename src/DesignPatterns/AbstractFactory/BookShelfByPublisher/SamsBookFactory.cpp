#include "SamsBookFactory.hpp"

#include "PHPBooks/PHPSamsBook.hpp"
#include "JavascriptBooks/JavascriptSamsBook.hpp"

PHPBook* SamsBookFactory::makePHPBook()
{
    return new PHPSamsBook();
};

JavascriptBook* SamsBookFactory::makeJavascriptBook()
{
    return new JavascriptSamsBook();
};