//
//  LinearSearch.cpp
//  Batman
//
//  Created by Guilherme Siani on 09/08/19.
//  Copyright © 2019 Guilherme Siani. All rights reserved.
//

#include "LinearSearch.hpp"

bool LinearSearch::inArray(int element, int args[], int argsSize)
{
    for (int i = 0; i < argsSize; ++i) {
        if (args[i] == element) {
            return true;
        }
    }
    return false;
};
