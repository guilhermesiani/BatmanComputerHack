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
    
    SECTION("iteractive search") {
        int vector[7] = {3,4,5,6,7,8,9};
        CHECK(binarySearch.iteractive(vector, 8, 7) == 5);
    }
    
    SECTION("iteractive search fail") {
        int vector[7] = {3,4,5,6,7,8,9};
        CHECK(binarySearch.iteractive(vector, 2, 7) == -1);
    }
    
    SECTION("recursive search") {
        int vector[7] = {3,4,5,6,7,8,9};
        CHECK(binarySearch.recursive(8, vector, 0, 6) == 5);
    }
    
    SECTION("recursive search fail") {
        int vector[7] = {3,4,5,6,7,8,9};
        CHECK(binarySearch.recursive(10, vector, 0, 6) == -1);
    }
}
