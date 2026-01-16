//LEETCODE PROBLEM 567 -> https://leetcode.com/problems/permutation-in-string/description/
// GIVEN TWO STRINGS S1 AND S2, RETURN TRUE IF S2 CONTAINS A PERMUTATION OF S1, OR FALSE OTHERWISE


#include<iostream>
#include<vector>
#include<string>
using namespace std;
   

bool check_permutation(string &s1 , string &s2){
    if(s1.size()>s2.size()) return false;
    vector <int> need(26, 0);
    vector <int> window(26, 0);
    int st=0 , end= s1.size()-1;
    for(char c: s1){
        need[c - 'a']++;
    }
    for(int j =0 ; j< s1.size() ; j++) {
     window[s2[j]-'a']++;
    }
    if(window == need){
        
        return true;
    }
    
    
    for(end = end+1; end<s2.size() ; end++){
        window[s2[st]-'a']--;
        st++;
        
        window[s2[end] - 'a']++;

        if (window == need)
        {
            return true;
        }
        
    }
    return false;
}

int main(){
  string s2 = "abbacacd";
  string s1 = "abc";
  return 0;

}
