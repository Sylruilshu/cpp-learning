#include "../std_lib_facilities.h"

int main()
{
    double userProvidedNum = 0;
    double smallestNum = 0; 
    double largestNum = 0;
    bool initialNumProvided = false;

    cout << "Enter a number. Terminate with '|'\n";
    
    while(cin >> userProvidedNum) {
        if(initialNumProvided) {
            if(userProvidedNum < smallestNum) {
                smallestNum = userProvidedNum;
                cout << userProvidedNum << " smallest number so far\n";
            } else if (userProvidedNum > largestNum) {
                largestNum = userProvidedNum;
                cout << userProvidedNum << " largest number so far\n";
            }
        } else {
            smallestNum = userProvidedNum;
            largestNum = userProvidedNum;
            cout << userProvidedNum << " both the smallest and largest value so far\n";
            initialNumProvided = true;
        }
    }
    return 0;
}