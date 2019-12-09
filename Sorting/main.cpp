#define DEBUGGING 0
#define MAX_INT 100

#include <iostream>
#include <string>
#include "algorithms/SelectionSort.h"
#include "algorithms/BubbleSort.h"
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <iomanip>

int* setup(size_t length);
void cleanup(int* arr);
void randomizeArray(int* arr, size_t length);
void runSorts(size_t length);
std::clock_t startTimer();
void stopTimer(std::clock_t start, std::string sortName);

int main(int argc, char **argv) {
    if(argc != 2) return -1;
    size_t arrayLength = std::stoi(argv[1]);

    runSorts(arrayLength);

    return 0;
}
















int* setup(size_t length) {
    int* arr = new int[length];
    randomizeArray(arr, length);
    return arr;
}

void cleanup(int* arr) {
    delete arr;
}

void randomizeArray(int* arr, size_t length) {
    srand(time(NULL));
    for(size_t i = 0; i < length; i++) {
        arr[i] = rand() % MAX_INT;
    }
}

void runSorts(size_t length) {
    int* arr;
    std::clock_t start;

    arr = setup(length);
    start = startTimer();
    selectionSort<int>(arr, length);
    stopTimer(start, "Selection Sort");
    cleanup(arr);

    arr = setup(length);
    start = startTimer();
    bubbleSort<int>(arr, length);
    stopTimer(start, "Bubble Sort");
    cleanup(arr);
}

std::clock_t startTimer() {
    return std::clock();
}

void stopTimer(std::clock_t start, std::string sortName) {
    std::clock_t end = std::clock();
    double duration = (end - start) / (double) CLOCKS_PER_SEC;
    std::cout << std::left << std::setw(20) << sortName + ":" << duration << " seconds" << std::endl;
}