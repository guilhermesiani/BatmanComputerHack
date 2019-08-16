//
//  LinearSearch.cpp
//  Batman
//
//  Created by Guilherme Siani on 09/08/19.
//  Copyright © 2019 Guilherme Siani. All rights reserved.
//

#include "SelectionSort.hpp"

void SelectionSort::sort(int vector[], int size)
{
    for (int index = 0; index < size; index++) {
        int minorIndex = index;
        for (int nextIndex = index + 1; nextIndex < size; ++nextIndex) {
            if (vector[nextIndex] < vector[minorIndex]) {
                minorIndex = nextIndex;
            }
        }
        int temp = vector[index];
        vector[index] = vector[minorIndex];
        vector[minorIndex] = temp;
    }
};
