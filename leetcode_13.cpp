#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


//  ROMAN TO INTEGER !

// a string of roman number is given we have to convert it to integer 

int romanToInt(string roman){
    unordered_map<char , int> mp ={
        {'I' , 1},
        {'V' , 5},
        {'X' , 10},
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000},
    };

    int num = 0;
    for(int i = 0 ; i < roman.size(); i++){

        if(i!= roman.size()-1){
            if(mp[roman[i]] < mp[roman[i+1]]){
                num+= mp[roman[i+1]] -mp[roman[i]];
                i +=1;
                continue;
            }
        }
        
        num+= mp[roman[i]];
    }
    return num;
}

// THE ABOVE CODE USES HASH MAP WHICH HURTS THE RUNTIME 
//  BELOW CODE USES SWITCH CASE FOR BETTER COMPLEXITY !!


int romanToInt2(string roman) {
    auto val = [](char c) -> int {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default:  return 0;
        }
    };

    int num = 0;
    for(int i = 0; i < roman.size(); i++){
        if(val(roman[i]) < val(roman[i+1])){
            num += val(roman[i+1]) - val(roman[i]);
            i++;
            continue;
        }
        num += val(roman[i]);
    }
    return num;
}

int main(){
    cout<<romanToInt("III");
    return 0;
}
