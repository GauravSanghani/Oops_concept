#include <iostream>

class Matrix1D {
private:
    int size;
    int* data;

public:
    // Constructor
    Matrix1D(int n) : size(n) {
        data = new int[size];
    }

    // Destructor
    ~Matrix1D() {
        delete[] data;
    }

    // Overload the + operator for matrix addition
    Matrix1D operator+(const Matrix1D& other) {
        if (size != other.size) {
            std::cerr << "Matrix sizes are not compatible for addition." << std::endl;
            return Matrix1D(0); // Return an empty matrix
        }

        Matrix1D result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    // Display the matrix
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int size = 5;

    Matrix1D matrix1(size);
    for (int i = 0; i < size; ++i) {
        matrix1.data[i] = i + 1;
    }

    Matrix1D matrix2(size);
    for (int i = 0; i < size; ++i) {
        matrix2.data[i] = i * 2;
    }

    std::cout << "Matrix 1: ";
    matrix1.display();

    std::cout << "Matrix 2: ";
    matrix2.display();

    // Perform matrix addition using operator overloading
    Matrix1D result = matrix1 + matrix2;

    std::cout << "Result of Matrix Addition: ";
    result.display();

    return 0;
}