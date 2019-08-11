//
//  testSampleClass.cpp
//  TestCatch
//
//  Created by Hilton Lipschitz on 2014-10-09.
//  Copyright (c) 2014 Hilton Lipschitz. All rights reserved.
//

#include "catch.hpp"

#include "LinearSearch.hpp"
#include <array>

TEST_CASE("Testing Sample Class") {
    LinearSearch linearSearch;
  
    SECTION("setting the str") {
        std::array<int, 5> args = {3,5,6,1,7};
        CHECK(linearSearch.inArray(3, args));
    }
}
