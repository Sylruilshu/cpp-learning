// This program is a simple calculator.

#include "../std_lib_facilities.h"

int main()
{
    double a = 0;
    double b = 0;
    string operation;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operation (+,-,*,/): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> b;

    
    if(operation == "+")
        cout << a << " + " << b << " = " << a + b;
    
    else if(operation == "-")
        cout << a << " - " << b << " = " << a - b;
    
    else if(operation == "*")
        cout << a << " * " << b << " = " << a * b;
    
    else if(operation == "/")
        cout << a << " / " << b << " = " << a / b;

}