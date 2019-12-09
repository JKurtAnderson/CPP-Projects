#include <iostream>
#include <string>
#include "algorithms/SelectionSort.h"
#include <stdlib.h>
#include <time.h>

#define MAX_INT 100

void randomizeArray(int* array, size_t length);

int main(int argc, char **argv) {
    if(argc != 2) return -1;

    const size_t arrayLength = std::stoi(argv[1]);
    int* arr = new int[arrayLength];
    randomizeArray(arr, arrayLength);

    selectionSort<int>(arr, arrayLength);
    delete arr;
    return 0;
}

void randomizeArray(int* array, size_t length) {
    srand(time(NULL));
    for(int i = 0; i < length; i++) {
        array[i] = rand() % MAX_INT;
    }
}