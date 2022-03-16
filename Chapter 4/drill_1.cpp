#include "../std_lib_facilities.h"

int main()
{
    int x, y = 0;
   
    cout << "Enter two numbers. Terminate with '|'\n";
    
    while(cin >> x >> y)
    {
        cout << '\n' << x << '\n' << y << '\n';
    }
    return 0;
}