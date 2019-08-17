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
