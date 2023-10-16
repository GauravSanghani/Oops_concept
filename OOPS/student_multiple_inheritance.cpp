#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void readData() {
        std::cout << "Enter name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    Student(const std::string& n, int a) : Person(n, a) {
        percentage = 0.0;
    }

    void readData() {
        Person::readData();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void displayData() {
        Person::displayData();
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    Teacher(const std::string& n, int a) : Person(n, a) {
        salary = 0.0;
    }

    void readData() {
        Person::readData();
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void displayData() {
        Person::displayData();
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    std::string name;
    int age;

    std::cout << "Enter student's information:" << std::endl;
    Student student("Student", 0);
    student.readData();

    std::cout << "\nEnter teacher's information:" << std::endl;
    Teacher teacher("Teacher", 0);
    teacher.readData();

    std::cout << "\nStudent's information:" << std::endl;
    student.displayData();

    std::cout << "\nTeacher's information:" << std::endl;
    teacher.displayData();

    return 0;
}
