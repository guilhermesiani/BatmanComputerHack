#include "../../catch.hpp"
#include <iostream>

#include "../../../src/Algorithms/Sort/BubbleSort.cpp"

TEST_CASE("Testing Bubble Sort") {
    BubbleSort bubbleSort;
    
    SECTION("Should sort array") {
        int size = 5;
        int numbers[5] = {3,5,1,2,4};
        bubbleSort.sort(numbers, size - 1);
        for (int i = 0; i < size - 1; i++) {
            CHECK(numbers[i] == (i + 1));
        }
    }
}
