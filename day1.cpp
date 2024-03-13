#include <bits\stdc++.h>
using namespace std;

class Calc
{
public:
    double sum(double num1, double num2)
    {
        return num1 + num2;
    }

    double sub(double num1, double num2)
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
    Calc res;
    char op;
    double num1, num2;

    cout << "Enter The First Number: ";
    cin >> num1;

    cout << "Enter operator : " << endl
         << "=> + \n=> - \n=> * \n=> / \n";
    cin >> op;

    cout << "Enter The Second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << res.sum(num1, num2) << endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << res.sub(num1, num2) << endl;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << res.multiplication(num1, num2) << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << num1 << " / " << num2 << " = " << res.division(num1, num2) << endl;
        }
        else
        {
            cout << "Division by zero is undefined!!" << endl;
        }
        break;
    default:
        cout << "Invalid Choice , Please Choose Again!!" << endl;
        break;
    }

    return 0;
}
