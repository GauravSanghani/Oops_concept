#include <iostream>

class Students {
protected:
    int rollNumber;

public:
    Students(int roll) : rollNumber(roll) {}

    void displayStudentDetails() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test : public Students {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    Test(int roll, int marks1, int marks2) : Students(roll), marksSubject1(marks1), marksSubject2(marks2) {}

    void displayTestDetails() {
        displayStudentDetails();
        std::cout << "Marks in Subject 1: " << marksSubject1 << std::endl;
        std::cout << "Marks in Subject 2: " << marksSubject2 << std::endl;
    }
};

class Result : public Test {
public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2) {}

    int calculateTotalMarks() {
        return marksSubject1 + marksSubject2;
    }

    void displayResult() {
        displayTestDetails();
        int totalMarks = calculateTotalMarks();
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    int rollNumber, marksSubject1, marksSubject2;

    std::cout << "Enter Roll Number: ";
    std::cin >> rollNumber;
    std::cout << "Enter Marks in Subject 1: ";
    std::cin >> marksSubject1;
    std::cout << "Enter Marks in Subject 2: ";
    std::cin >> marksSubject2;

    Result studentResult(rollNumber, marksSubject1, marksSubject2);

    std::cout << "\nStudent Result Details:" << std::endl;
    studentResult.displayResult();

    return 0;
}