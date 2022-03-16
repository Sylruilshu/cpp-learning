//This program gets 2 inputs and outputs the numbers between including.

#include "../std_lib_facilities.h"
#include <windows.h>

int main()
{
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;

    while(cin.fail()) //If input isn't an int ignore value and ask for int again.
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        cout << "BAD ENTRY. PLEASE ENTER AN INT\n";
        Sleep(1500);
        cout << "Enter Number: ";
        cin >> a;
    }

    cout << "Enter Second Number: ";
    cin >> b;

    while(cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        cout << "BAD ENTRY. PLEASE ENTER AN INT\n";
        Sleep(1500);
        cout << "Enter Number: ";
        cin >> b;
    }
    

    for(int val = a; val <= b; ++val) //Starting at a, loops through adding 1 to a until it equals b. outputs every iteration
    {
        cout << val << endl;
    }

    if(a > b)
    {
        for(int val = a; val >= b; --val)
        {
            cout << val << endl;
        }
    }

    keep_window_open();

    return 0;
}
