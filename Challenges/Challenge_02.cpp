/ 02 - Excption handling C++
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
int division(int a, int b){
    // if b is zero, throw an exception
    // TODO: throw an exception
    return a / b;
}
 
int main(){
    int a = 10, b = 0;
 
    // TODO: handle the exception of division by zero using try and catch
    int c = division(a, b);
    cout << c << endl;
    return 0;
}
