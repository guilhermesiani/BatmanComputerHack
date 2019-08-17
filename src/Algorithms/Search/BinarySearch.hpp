#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include <stdio.h>

class BinarySearch
{
public:
    int iteractive(int vector[], int key, int vectorSize);
    int recursive(int key, int vector[], int minIndex, int maxIndex);
};

#endif /* BinarySearch_hpp */
