#include <iostream>

int main() {
    // Manual heap allocation
    int* arr = new int[1000000];

    // Use the array (optional demonstration)
    for(int i = 0; i < 1000000; i++) {
        arr[i] = i;
    }

    // Free the memory to avoid leak
    delete[] arr;
    arr = nullptr; // Good practice to set pointer to null after deletion

    // Example of a potential memory leak if uncommented:
    // int* leak = new int[500000];
    // (No delete => memory leak)

    return 0;
}
