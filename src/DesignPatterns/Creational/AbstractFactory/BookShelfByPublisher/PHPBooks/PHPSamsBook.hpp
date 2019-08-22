#ifndef PHPSamsBook_hpp
#define PHPSamsBook_hpp

#include "PHPBook.hpp"

class PHPSamsBook: public PHPBook
{
public:
    std::string getTitle();
    std::string getAuthor();
};

#endif