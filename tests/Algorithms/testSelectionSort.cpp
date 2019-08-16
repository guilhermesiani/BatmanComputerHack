//
//  testLinearSearch.cpp
//  TestCatch
//
//  Created by Hilton Lipschitz on 2014-10-09.
//  Copyright (c) 2014 Hilton Lipschitz. All rights reserved.
//

#include "../catch.hpp"

#include "../../src/Algorithms/SelectionSort.cpp"

TEST_CASE("Testing Selection Sort") {
    SelectionSort selectionSort;
  
    SECTION("sorting numbers") {
        int vector[5] = {3,5,6,1,7};
        selectionSort.sort(vector, 5);
        CHECK(vector[0] == 1);
        CHECK(vector[1] == 3);
        CHECK(vector[2] == 5);
        CHECK(vector[3] == 6);
        CHECK(vector[4] == 7);
    }
}
