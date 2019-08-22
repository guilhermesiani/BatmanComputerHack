#ifndef Factory_hpp
#define Factory_hpp

#include "Factory.hpp"
#include "Bands/Queen.hpp"
#include "Bands/LinkinPark.hpp"

class BandFactory
{
public:
    Band* makeBand(std::string bandName);
};

#endif