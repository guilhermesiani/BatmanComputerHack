#ifndef Document_hpp
#define Document_hpp

#include <string>

class Document
{
public:
    virtual std::string getTitle() = 0;
    virtual std::string getContent() = 0;
    virtual Document* clone() = 0;
};

#endif