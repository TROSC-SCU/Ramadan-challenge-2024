// 02 - Excption handling C++

#include <iostream>
using namespace std;

/*
    Exception handling in C++:
    1. try
    2. catch
    3. throw
    4. rethrow
    5. noexcept

    TODO: Fix the following code to handle the exception of division by zero
*/
int division(int a, int b)
{
    if (b == 0)
        throw "Division by zero exception";

    return a / b;
}

int main()
{
    int a = 10, b = 0;

    try
    {
        int c = division(a, b);
        cout << c << endl;
    }
    catch (const char *msg)
    {
        cerr << "Exception caught: " << msg << endl;
    }

    return 0;
}
