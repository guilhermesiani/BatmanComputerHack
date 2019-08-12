//
//  testBinarySearch.cpp
//  TestCatch
//
//  Created by Hilton Lipschitz on 2014-10-09.
//  Copyright (c) 2014 Hilton Lipschitz. All rights reserved.
//

#include "catch.hpp"

#include "BinarySearch.hpp"

TEST_CASE("Testing Binary Search") {
    BinarySearch binarySearch;
    
    SECTION("integer in array") {
        int foo[6] = {3,4,7,1,9,8};
        CHECK(binarySearch.iteractiveSearch(foo, 7, 5) == 4);
    }
}
