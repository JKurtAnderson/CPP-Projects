//
// Created by Jason on 12/8/2019.
//

#ifndef SORTING_BUBBLESORT_H
#define SORTING_BUBBLESORT_H

#include <cstddef>
#include <iostream>
#include "Arrays.h"

template <class T>
static void bubbleSort(T* array, size_t length){
#if defined(DEBUGGING) && (DEBUGGING == 1)
    printArray(array, length, "unsorted");
#endif
    bool swapOccurred = true;
    while(swapOccurred) {
        swapOccurred = false;
        for(int index = 0; index < length - 1; index++) {
            if(array[index] > array[index + 1]) {
                swap(array, index, index + 1);
                swapOccurred = true;
            }
        }
    }
#if defined(DEBUGGING) && (DEBUGGING == 1)
    printArray(array, length, "sorted");
#endif
}

#endif //SORTING_BUBBLESORT_H
