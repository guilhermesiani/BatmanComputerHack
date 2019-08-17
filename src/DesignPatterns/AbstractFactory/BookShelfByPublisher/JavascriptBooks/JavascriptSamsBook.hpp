#ifndef JavascriptSamsBook_hpp
#define JavascriptSamsBook_hpp

#include "JavascriptBook.hpp"

class JavascriptSamsBook: public JavascriptBook
{
public:
    char* getTitle();
    char* getAuthor();
};

#endif