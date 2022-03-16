// This program converts from miles (input from user) to kilometers (output to monitor)

#include "../std_lib_facilities.h"

int main()
{
    double miles = 0;
    double kilometers = 0;

    cout << "This program converts miles to kilometers\n"
         << "Enter miles: ";
    cin >> miles;

    kilometers = miles * 1.609;

    cout << miles << " mile(s) is equal to " << kilometers << " kilometer(s).\n"; 
}