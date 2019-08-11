//
//  testSampleClass.cpp
//  TestCatch
//
//  Created by Hilton Lipschitz on 2014-10-09.
//  Copyright (c) 2014 Hilton Lipschitz. All rights reserved.
//

#include "catch.hpp"

#include "LinearSearch.hpp"

TEST_CASE("Testing Linear Search") {
    LinearSearch linearSearch;
  
    SECTION("integer in array") {
        CHECK(linearSearch.inArray(3, {3,5,6,1,7}));
    }
    
    SECTION("integer not in array") {
        CHECK_FALSE(linearSearch.inArray(8, {3,5,6,1,7}));
    }
}
