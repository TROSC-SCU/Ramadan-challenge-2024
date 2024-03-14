#include <iostream>

using namespace std;

class Calculator
{

public:
    double summation(double num1, double num2)
    {
        return num1 + num2;
    }

    double subtraction(double num1, double num2)
    {
        return num1 - num2;
    }

    double multiplication(double num1, double num2)
    {
        return num1 * num2;
    }

    double division(double num1, double num2)
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator result;
    char op;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << result.summation(num1, num2) << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << result.subtraction(num1, num2) << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << result.multiplication(num1, num2) << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << result.division(num1, num2) << endl;
        else
            cout << "Infinity" << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
        break;
    }

    return 0;
}
