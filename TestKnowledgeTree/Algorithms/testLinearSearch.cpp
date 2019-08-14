//
//  testLinearSearch.cpp
//  TestCatch
//
//  Created by Hilton Lipschitz on 2014-10-09.
//  Copyright (c) 2014 Hilton Lipschitz. All rights reserved.
//

#include "../catch.hpp"

#include "../../KnowledgeTree/Algorithms/LinearSearch.cpp"

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
