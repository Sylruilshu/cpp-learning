#include "../std_lib_facilities.h"

int main()
{
    double a, b = 0;
   
    cout << "Enter two numbers. Terminate with '|'\n";
    
    while(cin >> a >> b)
    {
        if(a < b)
            cout << "The smaller value is: " << a << "\nThe larger value is: " << b << '\n';
        else if (a == b)
            cout << "The numbers are equal! \n";
        else
            cout << "The smaller value is: " << b << "\nThe larger value is: " << a << '\n';
    }
    return 0;
}