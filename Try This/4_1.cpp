
#include "../std_lib_facilities.h"

int main()
{

    int i = 0;
    char a = 'a';

    while (i < 26)
    {
        cout << char(a + i) << " " << (a + i) << '\n';
        ++i;   
    }

}