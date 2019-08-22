#ifndef PHPBook_hpp
#define PHPBook_hpp

#include <string>

class PHPBook
{
private:
    std::string subject = "PHP";
public:
    virtual std::string getTitle() = 0;
    virtual std::string getAuthor() = 0;
};

#endif /* PHPBook.hpp */
