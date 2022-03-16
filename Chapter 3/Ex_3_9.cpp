// This program prints out a number based on user input

#include "../std_lib_facilities.h"

int main()
{
    string number = "";

    cout << "Spell out a number between 0 & 4: ";
    cin >> number;


    if( (number == "zero") || (number == "Zero") )
        cout << "Zero = 0\n";

    if( (number == "one") || (number == "One") )
        cout << "One = 1\n";
    
    if( (number == "two") || (number == "Two") )
        cout << "Two = 2\n";

    if( (number == "three") || (number == "Three") )
        cout << "Three = 3\n";

    if( (number == "four") || (number == "Four") )
        cout << "Four = 4\n";

    else
        cout << "Not a number i know yet!\n";

}