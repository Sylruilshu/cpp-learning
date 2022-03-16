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