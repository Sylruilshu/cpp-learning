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
    int cents = 0;

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

    cout << "You have " << pennies << " pennies.\n"
         << "You have " << nickels << " nickels.\n"
         << "You have " << dimes << " dimes.\n"
         << "You have " << quarters << " quarters.\n"
         << "You have " << half_dollars << " half-dollars.\n"
         << "You have " << dollars << " dollars.\n\n"
         << "The value of all of your coins is " << cents << " ceants.\n";
}