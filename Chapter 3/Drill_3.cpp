// This program promts the user for input and then outputs a simple letter.

#include "../std_lib_facilities.h"

int main()
{
    string first_name = "";
    int age = 1;

    string friend_name = "";
    char friend_sex = 0;


    cout << "Enter the name of the person you want to write to: \n";
    cin >> first_name;
    cout << "Enter their age: \n";
    cin >> age;

        if(age < 0)
            simple_error("You're joking!");

        if(age > 110)
            simple_error("You're joking!");


    cout << "Enter the name of another friend: \n";
    cin >> friend_name;
    cout << "Enter the sex of your friend (M for Male & F for Female): \n";
    cin >> friend_sex;


    cout << "\nDear " << first_name << ",\n"
         << "How have you been? I'm doing pretty well myself!\n"
         << "By the way, have you seen " << friend_name << " lately?\n";
         

        if(friend_sex == 'M')
            cout << "If you see " << friend_name << ", ask him to call me.\n";
    
        if (friend_sex == 'F')
            cout << "If you see " << friend_name << ", ask her to call me.\n";


    cout << "I hear you just had a birthday and you are " << age <<  " years old,\n";


        if(age < 12)
            cout << "Next year you will be " << age + 1 << ".\n";

        if(age == 17)
            cout << "Next year you will be able to vote.\n";

        if(age > 70)
            cout << "I hope you are enjoying retirement.\n";


    cout << "Yours sincerely,\n\nMatt.\n";


    keep_window_open();

}