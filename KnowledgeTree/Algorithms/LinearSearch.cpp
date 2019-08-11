//
//  LinearSearch.cpp
//  Batman
//
//  Created by Guilherme Siani on 09/08/19.
//  Copyright © 2019 Guilherme Siani. All rights reserved.
//

#include "LinearSearch.hpp"
#include <array>

bool LinearSearch::inArray(int element, std::array<int, 5> args)
{
    for (int i = 0; i < args.size(); ++i) {
        if (args[i] == element) {
            return true;
        }
    }
    return false;
};
