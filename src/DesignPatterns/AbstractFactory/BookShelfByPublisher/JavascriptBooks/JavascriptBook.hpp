#ifndef JavascriptBook_hpp
#define JavascriptBook_hpp

class JavascriptBook
{
private:
    char* subject = "Javascript";
public:
    virtual char* getTitle() = 0;
    virtual char* getAuthor() = 0;
};

#endif /* JavascriptBook.hpp */
