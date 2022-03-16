#include "../std_lib_facilities.h"

int main()
{

    char a = 'a';
    char A = 'A';

    for(int i = 0; i < 26; ++i)
    {
        cout << char(a + i) << ' ' << (a + i) << '\t'; 
        cout << char(A + i) << ' ' << (A + i) << '\n'; 
    }

}