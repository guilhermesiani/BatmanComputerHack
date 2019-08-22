#include "OReallyBookFactory.hpp"

#include "PHPBooks/PHPOReallyBook.hpp"
#include "JavascriptBooks/JavascriptOReallyBook.hpp"

PHPBook* OReallyBookFactory::makePHPBook()
{
    return new PHPOReallyBook();
};

JavascriptBook* OReallyBookFactory::makeJavascriptBook()
{
    return new JavascriptOReallyBook();
};