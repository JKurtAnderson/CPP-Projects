//
// Created by Jason on 12/8/2019.
//

#ifndef SORTING_ARRAYS_H
#define SORTING_ARRAYS_H

#include <cstddef>
#include <string>

template <typename T>
void swap(T* array, size_t i, size_t j) {
    T temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

template <typename T>
void printArray(T* array, size_t length, std::string name) {
    std::cout << name;
    if(name != "") std::cout << ": ";
    std::cout << "{";
    for(int i = 0; i < length - 1; i++) {
        std::cout << array[i] << ", ";
    }
    std::cout << array[length - 1] << "}" << std::endl;
}



#endif //SORTING_ARRAYS_H
