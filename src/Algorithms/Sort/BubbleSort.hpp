#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>

class BubbleSort
{
public:
    void sort(int *vector, int size);
private:
    void swap(int *currentValue, int *nextValue);
};

#endif /* BubbleSort_hpp */
