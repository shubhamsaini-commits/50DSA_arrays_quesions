#include <iostream>
#include <string>
using namespace std;


bool isPlaindrome(int x){
    if (x<0) return false;

    string str = to_string(x);
    int i = 0 , j = str.size()-1;

    while (i<=j)
    {
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}



int main(){
    cout<<isPlaindrome(1221);
    return 0;
}
