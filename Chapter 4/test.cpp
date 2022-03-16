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





#include "../std_lib_facilities.h"

int main()
{

    cout << "Enter a sentence:\n";

    vector<string> disliked = {"a", "bin", "was", "disliked"};
    vector<string> words;
    
    for(string temp; cin >> temp;)
     words.push_back(temp);
    

    for(int i = 0; i < words.size(); ++i)
        if(words[i] == disliked[i])
            cout << "BLEEP ";
   
        else 
            cout << words[i] << ' ';
}