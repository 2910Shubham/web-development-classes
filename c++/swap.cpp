#include <iostream>

int main() {

    int arr[9] = {0,1,2,2,3,0,4,2};
    int valueToDelete = 2; 
    int n = sizeof(arr)/sizeof(int);
    
    // In-place deletion by shifting elements
    int newSize = n;
    for (int i = 0; i < newSize; ) {
        if (arr[i] == valueToDelete) {
            for (int j = i; j < newSize - 1; ++j) {
                arr[j] = arr[j + 1]; // Shift left
            }
            --newSize; // Reduce size
        } else {
            ++i; // Move to next element
        }
    }

    std::cout << "Array after deletion:\n";
    for (int i = 0; i < newSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
