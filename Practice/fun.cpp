//This program reads a list of inputs (ints) and counts how many times each integer occurs. (has to be in order)

#include "../std_lib_facilities.h"

int main()
{
    
    cout << "Enter Numbers: ";

    int crr_val, val;
    if(cin >> crr_val)
    {
        int count = 1;
        while(cin >> val)
        {
            if(crr_val == val)
            ++count;

            else
            {
                cout << crr_val << " appears " << count << " time(s).(Inner Loop)" << endl;
                crr_val = val;
                count = 1;
            }
        }
        cout << crr_val << " appears " << count << " time(s).(Outer Loop)" << endl;
    }
    
}
