// This program takes a list of 3 names input by the user and outputs them to the screen in alphabetical order.

#include "../std_lib_facilities.h"

int main()
{
    string a = "";
    string b = "";
    string c = "";

    cout << "Please enter three names: ";
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