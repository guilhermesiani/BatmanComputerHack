#ifndef JavascriptOReallyBook_hpp
#define JavascriptOReallyBook_hpp

#include "OReallyBook.hpp"

class JavascriptOReallyBook: public OReallyBook
{
public:
    char* getTitle();
    char* getAuthor();
};

#endif