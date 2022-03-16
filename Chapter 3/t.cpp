

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

    keep_window_open();
    
}