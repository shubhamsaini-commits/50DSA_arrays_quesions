//given a string s , find the length of longest substring that contains
// no repeating characters 

#include<iostream>
#include<vector>
#include<string>
#include<climits>


using namespace std;
   
int max_substring_len(string &s){
    vector <int> freq(26 , 0);
    int left = 0 , right , mwl = INT_MIN;



    for(right = 0; right<s.size() ; right++){
        freq[s[right] -'a']++;

        while(freq[s[right] - 'a'] > 1){
            freq[s[left]-'a']--;
            left++;
        }

        mwl= max(mwl , right-left+1);


    }
    return mwl;
}

int main(){
  string s = "abcabcbb";

  cout<<max_substring_len(s);
  return 0;
}
