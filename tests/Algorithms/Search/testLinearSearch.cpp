#include "../../catch.hpp"

#include "../../../src/Algorithms/Search/LinearSearch.cpp"

TEST_CASE("Testing Linear Search") {
    LinearSearch linearSearch;
  
    SECTION("integer in array") {
        int args[5] = {3,5,6,1,7};
        CHECK(linearSearch.inArray(3, args, 5));
    }
    
    SECTION("integer not in array") {
        int args[5] = {3,5,6,1,7};
        CHECK_FALSE(linearSearch.inArray(8, args, 5));
    }
}
