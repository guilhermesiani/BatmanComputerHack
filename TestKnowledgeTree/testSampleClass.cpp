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
  
  SECTION("setting the str") {
      LinearSearch linearSearch;
      std::array<int, 5> args = {3,5,6,1,7};
      int element = 3;
      CHECK(linearSearch.inArray(element, args));
  }
  
  SECTION("test bigStr") {
//    sc.setStr("TestStr");
//    REQUIRE(sc.bigStr() == "TestStr : 8");
      CHECK_FALSE(false);
  }
  
  SECTION("Test doubles") {
//    sc.setD(1);
//    CHECK(sc.getD() == 1);
//    sc.setD(1.0/3.0);
//    CHECK(sc.getD() == Approx(0.33333)); // Nice
  }
}
