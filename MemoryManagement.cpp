// Filename: MemoryManagement.cpp
// Author: Unique Karanjit 
// Date: Feb 2, 2025
// Description: A simple example in C++ demonstrating manual memory management with `new` and `delete`.

#include <iostream>

void processData(int* data, int size) {
    std::cout << "Processing data: ";
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* data = new int[5]{1, 2, 3, 4, 5}; // Explicit heap allocation
    processData(data, 5);
    delete[] data; // Manual deallocation to avoid memory leaks
    return 0;
}
