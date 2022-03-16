#include "../std_lib_facilities.h"

int main()
{   
    double initial_inv = 0;
    double weekly_inv = 0;
    double yearly_inv = 0;
    double interest_rate = 0;
    double goal_amount = 0;
    double current_amount = 0;
    double profit = 0;
    int count = 1;

    cout << "Enter initial investment: ";
    cin >> initial_inv;
    cout << "Enter weekly investment: ";
    cin >> weekly_inv;
    cout << "Enter interest rate: ";
    cin >> interest_rate;
    cout << "Enter goal amount: ";
    cin >> goal_amount;

    cout << '\n' << initial_inv << '\n';

    current_amount = initial_inv;

    yearly_inv = (weekly_inv * 4) * 12; 


    while(current_amount < goal_amount)
    {
        profit = yearly_inv + (current_amount * (interest_rate / 100));
        current_amount = profit + current_amount;

        cout << current_amount << '\n';

        ++count;
    }

    cout << "\nIt will take " 
         << count  
         << "years to make $" 
         << goal_amount 
         << ", with an initial investment of $" 
         << initial_inv
         << " and a weekly investment of $"
         << weekly_inv
         << " ("
         << yearly_inv
         << " a year) at "
         << interest_rate 
         << "%\n\n";

    keep_window_open();
  
}