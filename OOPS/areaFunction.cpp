#include <iostream>
#include <cmath>

class AreaCalculator {
public:
    
    double calculateArea(double length, double breadth) {
        return length * breadth;
    }


    double calculateArea(double base, double height, bool isTriangle = true) {
        if (isTriangle) {
            return 0.5 * base * height;
        }
        return base * height;  
    }

   
    double calculateArea(double radius, bool isCircle = true) {
        if (isCircle) {
            return M_PI * radius * radius;
        }
        return 0.0;  
    }
};

int main() {
    AreaCalculator calculator;

    double rectangleArea = calculator.calculateArea(4.0, 6.0);
    std::cout << "Rectangle Area: " << rectangleArea << std::endl;


    double triangleArea = calculator.calculateArea(3.0, 4.0, true);
    std::cout << "Triangle Area: " << triangleArea << std::endl;

 
    double circleArea = calculator.calculateArea(5.0, true);
    std::cout << "Circle Area: " << circleArea << std::endl;

    return 0;
}