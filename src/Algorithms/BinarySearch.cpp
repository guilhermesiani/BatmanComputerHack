//
//  BinarySearch.cpp
//  src
//
//  Created by Guilherme Siani on 11/08/19.
//  Copyright © 2019 Guilherme Siani. All rights reserved.
//

#include "BinarySearch.hpp"

int BinarySearch::iteractive(int vector[], int key, int vectorSize)
{
    int minIndex = 0;
    int maxIndex = vectorSize - 1;
    int position;
    while (minIndex <= maxIndex) {
        position = (minIndex + maxIndex) / 2;
        if (key == vector[position]) {
            return position;
        }
        if (key < vector[position]) {
            maxIndex = position - 1;
        } else {
            minIndex = position + 1;
        }
    }
    return -1;
};

int BinarySearch::recursive(int key, int vector[], int minIndex, int maxIndex)
{
    int position = (minIndex + maxIndex) / 2;
    if (vector[position] == key) {
        return position;
    }
    if (minIndex <= maxIndex) {
        if (vector[position] < key) {
            return recursive(key, vector, minIndex + 1, maxIndex);
        } else {
            return recursive(key, vector, minIndex, maxIndex - 1);
        }
    }
    return -1;
};
