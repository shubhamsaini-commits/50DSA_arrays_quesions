// find the length of longest substring that contains 
// k distinct elements


#include<string>
#include<iostream>
#include<vector>
using namespace std;
   
int find_subst(string s , int k){
    int left = 0 , right , maxl = 0 , dist = 0;
    vector <int> freq(26 , 0);

    for(right = 0 ; right<s.size() ; right++){
        freq[s[right] - 'a']++;
        if(freq[s[right]-'a'] == 1) {
            dist++;
        }
        while(dist > k ){
            freq[s[left] - 'a']--;
            if( freq[s[left]-'a']==0) dist--;
            left++;
        }

        maxl = max(maxl , right - left +1);
    }
    return maxl;
}

int main(){
  string s = "eceba";
  cout<<find_subst(s , 2);
  return 0;
}
