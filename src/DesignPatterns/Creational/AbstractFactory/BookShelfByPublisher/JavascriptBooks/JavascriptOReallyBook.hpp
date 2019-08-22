#ifndef JavascriptOReallyBook_hpp
#define JavascriptOReallyBook_hpp

#include "JavascriptBook.hpp"

class JavascriptOReallyBook: public JavascriptBook
{
public:
    std::string getTitle();
    std::string getAuthor();
};

#endif