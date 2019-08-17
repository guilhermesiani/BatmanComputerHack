#ifndef PHPSamsBook_hpp
#define PHPSamsBook_hpp

#include "PHPBook.hpp"

class PHPSamsBook: public PHPBook
{
public:
    char* getTitle();
    char* getAuthor();
};

#endif