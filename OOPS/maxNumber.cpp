#include <iostream>

class MaxFinder;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    
    friend class MaxFinder;
};

class MaxFinder {
public:
    static int findMax(const Number& num1, const Number& num2) {
        return (num1.value > num2.value) ? num1.value : num2.value;
    }
};

int main() {
    Number num1(42);
    Number num2(17);

    int maxNumber = MaxFinder::findMax(num1, num2);

    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}