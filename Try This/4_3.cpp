
#include "../std_lib_facilities.h"



int a = 0;

int square(int x)
{

    cout << "Enter a number \n";
    cin >> x;

    for(int i = 0; i < x; ++i)
    {
      a += x;
    }
    return a;

}


int main()
{
 
    cout << square(a);

}