//
//  testBubbleSort.cpp
//  TestCatch
//
//  Created by Hilton Lipschitz on 2014-10-09.
//  Copyright (c) 2014 Hilton Lipschitz. All rights reserved.
//

#include "catch.hpp"
#include <iostream>

#include "BubbleSort.hpp"

TEST_CASE("Testing Bubble Sort") {
    BubbleSort bubbleSort;
    
    SECTION("Should sort array") {
        int size = 5;
        int *numbers;
        numbers = (int*)malloc(size);
        numbers[0] = 3;
        numbers[1] = 5;
        numbers[2] = 1;
        numbers[3] = 2;
        numbers[4] = 4;
        bubbleSort.sort(numbers, size - 1);
        for (int i = 0; i < size - 1; i++) {
            CHECK(numbers[i] == (i + 1));
        }
    }
}
