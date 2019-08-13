//
//  BubbleSort.cpp
//  KnowledgeTree
//
//  Created by Guilherme Siani on 12/08/19.
//  Copyright © 2019 Guilherme Siani. All rights reserved.
//

#include "BubbleSort.hpp"

void BubbleSort::sort(int *vector, int size)
{
    if (size < 1) {
        return;
    }
    for (int i = 0; i < size; i++) {
        if (vector[i] > vector[i + 1]) {
            swap(&vector[i], &vector[i + 1]);
        }
    }
    sort(vector, --size);
}

void BubbleSort::swap(int *currentValue, int *nextValue)
{
    int temporaryValue = *currentValue;
    *currentValue = *nextValue;
    *nextValue = temporaryValue;
}
