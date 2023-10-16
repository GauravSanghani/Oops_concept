#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    std::vector<T> vec(arr, arr + size);
    std::sort(vec.begin(), vec.end());
    std::copy(vec.begin(), vec.end(), arr);
}

int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    double doubleArray[] = {3.14, 1.0, 2.71, 0.5, 1.618};
    char charArray[] = {'c', 'a', 'b', 'd', 'e'};

    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    int charArraySize = sizeof(charArray) / sizeof(charArray[0]);

    // Sort integer array
    sortArray(intArray, intArraySize);
    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < intArraySize; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Sort double array
    sortArray(doubleArray, doubleArraySize);
    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleArraySize; i++) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    // Sort character array
    sortArray(charArray, charArraySize);
    std::cout << "Sorted Character Array: ";
    for (int i = 0; i < charArraySize; i++) {
        std::cout << charArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}