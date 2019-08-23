#ifndef Container_hpp
#define Container_hpp

class Container
{
public:
    static Container* getInstance();
protected:
    Container();
private:
    static Container* _instance;
};

#endif