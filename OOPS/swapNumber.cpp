#include <iostream>

class NumberSwapper;

class Number {
public:
    int value;

public:
    Number(int val) : value(val) {}

    friend class NumberSwapper;
};

class NumberSwapper {
public:
    static void swapNumbers(Number& num1, Number& num2) {
        num1.value = num1.value + num2.value;
        num2.value = num1.value - num2.value;
        num1.value = num1.value - num2.value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    std::cout << "Before swapping:" << std::endl;
    std::cout << "num1: " << num1.value << std::endl;
    std::cout << "num2: " << num2.value << std::endl;

    NumberSwapper::swapNumbers(num1, num2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "num1: " << num1.value << std::endl;
    std::cout << "num2: " << num2.value << std::endl;

    return 0;
}