#include "Container.hpp"

Container* Container::_instance = 0;

Container::Container()
{

};

Container* Container::getInstance()
{
    if (_instance == nullptr) {
        _instance = new Container;
    }
    return _instance;
};