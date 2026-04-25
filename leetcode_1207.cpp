#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 
bool occurence(vector<int> &arr){
    unordered_map<int , int> mp1;
    unordered_map<int , int> mp2;

    for(int x : arr){
        mp1[x]++;
    }
    for(auto &pair: mp1){
        mp2[pair.second]++;
        if(mp2[pair.second]==2){
            return false;
        }
    }
    return true;
}



int main(){
    vector <int> arr = {1 , 2 , 2  , 3 , 3 };
    cout<<occurence(arr);
    return 0;
}
