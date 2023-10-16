#include <iostream>
using namespace std;

class Calculator
{
public:
  void printResult(double x, double y)
  {
    cout << "firstNumber + secondNumber = " << x + y << endl;

    cout << "firstNumber - secondNumber = " << x - y << endl;

    cout << "firstNumber * secondNumber = " << x * y << endl;

    cout << "firstNumber/secondNumber = " << x / y << endl;
  }
};

int main()
{
  double firstNumber, secondNumber;
  Calculator c;

  cout << "Enter the first number: " << endl;
  cin >> firstNumber;

  cout << "Enter the second number: " << endl;
  cin >> secondNumber;

  c.printResult(firstNumber, secondNumber);
}