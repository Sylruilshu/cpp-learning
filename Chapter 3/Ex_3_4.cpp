// This programs promts the user for input (two integers), manipulates them with basic arithmetics to produce an output to the monitor.

#include "../std_lib_facilities.h"

int main()
{
    int val1 = 0, val2 = 0;
    int difference = 0;
    double ratio = 0;


    cout << "Enter two integers: ";
    cin >> val1;
    cin >> val2;

        if(val1 > val2)
            cout << '\n' << val1 << " is larger than " << val2 << '\n';

        else
            cout << '\n' << val1 << " is smaller than " << val2 << '\n';

    
        if(val1 > val2)
            difference = val1 - val2;

        else 
            difference = val2 - val1;

        
        if(val1 > val2)
            ratio = (double)val2 / val1;

        else
            ratio = (double)val1 / val2;


    cout << "Sum is equal to: " << val1 + val2 << '\n'
         << "Difference is equal to: " << difference << '\n'
         << "Product is equal to: " << val1 * val2 << '\n'
         << "Ratio is equal to: " << ratio << '\n';

}