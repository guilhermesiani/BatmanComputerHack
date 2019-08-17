#ifndef PHPBook_hpp
#define PHPBook_hpp

class PHPBook
{
private:
    char* subject = "PHP";
public:
    virtual char* getTitle() = 0;
    virtual char* getAuthor() = 0;
};

#endif /* PHPBook.hpp */
