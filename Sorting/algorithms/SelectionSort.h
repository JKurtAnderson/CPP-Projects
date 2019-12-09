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
#if defined(DEBUGGING) && (DEBUGGING == 1)
    printArray(array, length, "unsorted");
#endif
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
#if defined(DEBUGGING) && (DEBUGGING == 1)
    printArray(array, length, "sorted");
#endif
}

#endif //SORTING_SELECTIONSORT_H
