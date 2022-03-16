#include "../std_lib_facilities.h"

int main()
{

vector<string> words;

    for(string s; cin >> s && s != "quit";)
        words.push_back(s);

    sort(words);

    vector<string> w2;

        if(0 < words.size())
            {
                w2.push_back(words[0]);

                for(int i=1; i<words.size(); ++i)

                if(words[i-1] != words[i])
                    w2.push_back(words[i]);
            }

    cout << "found " << words.size() - w2.size() << " duplicate(s) \n";

    for(string s : w2) 
        cout << s << '\n';

}
