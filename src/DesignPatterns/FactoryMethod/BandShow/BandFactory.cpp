#include "BandFactory.hpp"

Band* BandFactory::makeBand(std::string bandName)
{
    if (bandName == "Queen") {
        return new Queen;
    }
    return new LinkinPark;
};