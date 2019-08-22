#ifndef JavascriptBook_hpp
#define JavascriptBook_hpp

#include <string>

class JavascriptBook
{
private:
    std::string subject = "Javascript";
public:
    virtual std::string getTitle() = 0;
    virtual std::string getAuthor() = 0;
};

#endif /* JavascriptBook.hpp */
