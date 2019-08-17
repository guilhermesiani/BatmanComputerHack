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
