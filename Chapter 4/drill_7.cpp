#include "../std_lib_facilities.h"

const string CENTIMETER = "cm";
const string INCH = "in";
const string FOOT = "ft";
const string METER = "m";
const vector<string> supportedUnits = {CENTIMETER, INCH, FOOT, METER};

int findUnitPosition(string userInput){
    for(int i = 0; i < supportedUnits.size(); ++i){
        string unitToFind = supportedUnits[i];
        int position = userInput.find(unitToFind);
        if(position == -1){
            continue;
        }else{
            return position;
        }
    }
    return -1;
}

int main()
{
    string userInput = "";

    while(cin >> userInput){
        int unitPosition = findUnitPosition(userInput);
        if(unitPosition == -1 || unitPosition == 0){
            cout << "invalid input\n";
            continue;
        }
        string unit = userInput.substr(unitPosition);
        double num = atof(userInput.substr(0, unitPosition).c_str());
        double convertedNum = 0;
        if(unit == INCH){
            convertedNum = 2.54 * num;
        }
        else if(unit == FOOT){
            convertedNum = (12 * 2.54) * num;
        }
        else if(unit == METER){
            convertedNum = 100 * num;
        }
        else{
            convertedNum = num;
        }
        cout << convertedNum << "cm\n";
    }
    
   return 0;
}
