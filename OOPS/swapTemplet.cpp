#include <iostream>
using namespace std;


template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    double dbl1 = 3.14, dbl2 = 2.71;
    char char1 = 'A', char2 = 'B';

    std::cout << "Before swapping:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;
    std::cout << "dbl1: " << dbl1 << ", dbl2: " << dbl2 << std::endl;
    std::cout << "char1: " << char1 << ", char2: " << char2 << std::endl;

    
    swapValues(num1, num2);
    swapValues(dbl1, dbl2);
    swapValues(char1, char2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;
    std::cout << "dbl1: " << dbl1 << ", dbl2: " << dbl2 << std::endl;
    std::cout << "char1: " << char1 << ", char2: " << char2 << std::endl;

    return 0;
}