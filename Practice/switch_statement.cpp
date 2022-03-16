
#include "../std_lib_facilities.h"


int main()
{

    constexpr double yen_to_usd = 0.0087;
    constexpr double euro_to_usd = 1.14;
    constexpr double pound_to_usd = 1.36;
    constexpr double krone_to_usd = 0.11;
    constexpr double yuan_to_usd = 0.16;

    double amount = 1;
    char unit = ' ';

        cout<< "Please enter a amount followed by a unit (y, e, p, k or Y):\n";
        cin >> amount >> unit;

    switch (unit)
    {
        case 'y':
        cout << amount << " yen == " << yen_to_usd*amount << " usd\n";
        break;

        case 'e':
        cout << amount << " euro == " << euro_to_usd*amount << " usd\n";
        break;

        case 'p':
        cout << amount << " pound == " << pound_to_usd*amount << " usd\n";
        break;

        case 'k':
        cout << amount << " kroner == " << krone_to_usd*amount << " usd\n";
        break;

        case 'Y':
        cout << amount << " yuan == " << yuan_to_usd*amount << " usd\n";
        break;

        default:
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
        break;
    }

        keep_window_open();
}