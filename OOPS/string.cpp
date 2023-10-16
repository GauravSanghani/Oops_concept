#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;

public:
    // Constructor
    MyString(const char* s = nullptr) {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Overload the + operator for string concatenation
    MyString operator+(const MyString& other) {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        return MyString(newStr);
    }

    // Display the string
    void display() {
        if (str) {
            std::cout << str;
        } else {
            std::cout << "Empty String";
        }
        std::cout << std::endl;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("World!");

    std::cout << "String 1: ";
    str1.display();

    std::cout << "String 2: ";
    str2.display();

    // Concatenate strings using operator overloading
    MyString result = str1 + str2;

    std::cout << "Concatenated String: ";
    result.display();

    return 0;
}