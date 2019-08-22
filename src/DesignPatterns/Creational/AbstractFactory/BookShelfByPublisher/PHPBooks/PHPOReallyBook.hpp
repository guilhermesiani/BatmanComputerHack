#ifndef PHPOReallyBook_hpp
#define PHPOReallyBook_hpp

#include "PHPBook.hpp"

class PHPOReallyBook: public PHPBook
{
public:
    std::string getTitle();
    std::string getAuthor();
};

#endif