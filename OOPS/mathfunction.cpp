#include <iostream>

class Calculator {
public:
    // Addition function
    int mathOperation(int a, int b) {
        return a + b;
    }

    double mathOperation(double a, double b) {
        return a + b;
    }

    // Subtraction function
    int mathOperation(int a, int b, int c) {
        return a - b - c;
    }

    double mathOperation(double a, double b, double c) {
        return a - b - c;
    }

    // Multiplication function
    int mathOperation(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    double mathOperation(double a, double b, double c, double d) {
        return a * b * c * d;
    }

    // Division function
    double mathOperation(double a, int b) {
        if (b == 0) {
            std::cerr << "Division by zero is not allowed." << std::endl;
            return 0.0;
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;

    // Addition
    std::cout << "Addition (int): " << calculator.mathOperation(5, 3) << std::endl;
    std::cout << "Addition (double): " << calculator.mathOperation(5.5, 3.2) << std::endl;

    // Subtraction
    std::cout << "Subtraction (int): " << calculator.mathOperation(10, 3, 2) << std::endl;
    std::cout << "Subtraction (double): " << calculator.mathOperation(10.5, 3.2, 2.1) << std::endl;

    // Multiplication
    std::cout << "Multiplication (int): " << calculator.mathOperation(2, 3, 4, 5) << std::endl;
    std::cout << "Multiplication (double): " << calculator.mathOperation(2.5, 3.2, 4.1, 5.0) << std::endl;

    // Division
    std::cout << "Division (double): " << calculator.mathOperation(10.0, 2) << std::endl;
    std::cout << "Division (double): " << calculator.mathOperation(10.0, 0) << std::endl;

    return 0;
}