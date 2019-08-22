#ifndef JavascriptSamsBook_hpp
#define JavascriptSamsBook_hpp

#include "JavascriptBook.hpp"

class JavascriptSamsBook: public JavascriptBook
{
public:
    std::string getTitle();
    std::string getAuthor();
};

#endif