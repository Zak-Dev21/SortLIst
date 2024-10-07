

#include <iostream>
#include "Header.h"

int main() {
    int list[4] = { 6, 2, 5, 1 };
    int size = sizeof(list) / sizeof(list[0]);

    BubbleSort(list, size);

    // Print sorted list
    for (int i = 0; i < size; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

