#ifndef PHPOReallyBook_hpp
#define PHPOReallyBook_hpp

#include "OReallyBook.hpp"

class PHPOReallyBook: public OReallyBook
{
public:
    char* getTitle();
    char* getAuthor();
};

#endif