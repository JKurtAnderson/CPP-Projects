//
// Created by Jason on 12/8/2019.
//

#ifndef SORTING_SELECTIONSORT_H
#define SORTING_SELECTIONSORT_H

#include <cstddef>
#include <iostream>
#include "Arrays.h"

template <class T>
static void selectionSort(T* array, size_t length){
//    printArray(array, length, "unsorted");
    for(size_t selectionIndex = 0; selectionIndex < length - 1; selectionIndex++) {
        size_t iterationIndex = selectionIndex;
        size_t minimumIndex;
        for(minimumIndex = iterationIndex; iterationIndex < length; iterationIndex++) {
            if(array[iterationIndex] < array[minimumIndex]) {
                minimumIndex = iterationIndex;
            }
        }
        swap(array, selectionIndex, minimumIndex);
    }
//    printArray(array, length, "sorted");
}

#endif //SORTING_SELECTIONSORT_H
