#ifndef PHPOReallyBook_hpp
#define PHPOReallyBook_hpp

#include "PHPBook.hpp"

class PHPOReallyBook: public PHPBook
{
public:
    char* getTitle();
    char* getAuthor();
};

#endif