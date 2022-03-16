#include "../std_lib_facilities.h"

int main()
{
    double a, b = 0;
   
    cout << "Enter two numbers. Terminate with '|'\n";
    
    while(cin >> a >> b)
    {
        
        if(a < b)
        {
            cout << "The smaller value is: " << a << "\nThe larger value is: " << b << '\n';

            if((b - a) < 0.01)
                cout << "The numbers are almost equal! \n";
        }

        else if (a > b)
        {
            cout << "The smaller value is: " << b << "\nThe larger value is: " << a << '\n';
        
                if((a - b) < 0.01)
                cout << "The numbers are almost equal! \n";       
        }

        else
        {
            cout << "The numbers are equal!"<< '\n';
        }

    }
    return 0;
}
