// This program

#include "../std_lib_facilities.h"

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int dollars = 0;
    double cents = 0;
    double dolla = 0;

    cout << "How many pennies do you have: ";
    cin >> pennies;

    cout << "How many nickels do you have: ";
    cin >> nickels;

    cout << "How many dimes do you have: ";
    cin >> dimes;

    cout << "How many quarters do you have: ";
    cin >> quarters;

    cout << "How many half-dollars do you have: ";
    cin >> half_dollars;

    cout << "How many dollars do you have: ";
    cin >> dollars;

    cents = (pennies) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (dollars * 100);
    dolla = cents / 100;


    if(pennies == 1)
        cout << "You have " << pennies << " pennie.\n";
    else
        cout << "You have " << pennies << " pennies.\n";
    
    if(nickels == 1)
        cout << "You have " << nickels << " nickle.\n";
    else
        cout << "You have " << nickels << " nickles.\n";
    
    if(dimes == 1)
        cout << "You have " << dimes << " dime.\n";
    else
        cout << "You have " << dimes << " dimes.\n";

    if(quarters == 1)
        cout << "You have " << quarters << " quarter.\n";
    else
        cout << "You have " << quarters << " quarters.\n";
    
    if(half_dollars == 1)
        cout << "You have " << half_dollars << " half-dollar.\n";
    else
        cout << "You have " << half_dollars << " half-dollars.\n";
    
    if(dollars == 1)
        cout << "You have " << dollars << " dollar.\n\n";
    else
        cout << "You have " << dollars << " dollars.\n\n";


    cout << "The value of all of your coins is $" << dolla << '\n';
}