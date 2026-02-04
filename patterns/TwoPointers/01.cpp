// check if a string is a plaindrome 
#include<iostream>
#include<vector>
using namespace std;
   bool plain(string &s){
    // if(s.size()%2==0) return false;  wrong because even plaindrome string exists 
    int i = 0 ;
    int j = s.size()-1;
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
   }
int main(){
  
  return 0;
}
