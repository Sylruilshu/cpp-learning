// This program demonstrates what compiler errors are recieved when using variables with illegal names

#include "../std_lib_facilities.h"

int main()
{
    int double = 0;
    double if = 2;
    double bool = 1;
    int cout = 10; // work but shouldn't use
    int endl = 8; // work but shouldn't use
    double while = 0;
}