// This program detects if a number entered by the user is odd or even, then outputs the result to the screen.

#include "../std_lib_facilities.h"

int main()
{
    int a = 0;
    double b = 0;

    cout << "Please enter an integer: ";
    cin >> a;

    b = a % 2;

    if( b == 0)
        cout << "The number " << a << " is even!\n";
    else
        cout << "The number " << a << " is odd!\n";
    
}