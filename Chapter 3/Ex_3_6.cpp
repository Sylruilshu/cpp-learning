// This program takes a list of 3 inetegers input by the user and outputs them to the screen in ascending order.

#include "../std_lib_facilities.h"

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Please enter 3 integer values: ";
    cin >> a >> b >> c;


    if( (b < a) && (c < a) )
    {
        if( c < b )
            cout << c << ", " << b << ", " << a << '\n';
        else
            cout << b << ", " << c << ", " << a << '\n';
    }

    else if( (a < b) && (c < b) )
    {
        if( a < c )
            cout << a << ", " << c << ", " << b << '\n';
        else
            cout << c << ", " << a << ", " << b << '\n';
    }

    else if( (a < c) && (b < c) )
    {
        if( a < b )
            cout << a << ", " << b << ", " << c << '\n';
        else
            cout << b << ", " << a << ", " << c << '\n';
    }
}