#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k


bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int, int> mp;

    for(int i  = 0 ; i < nums.size() ; i++){
        if(mp.find(nums[i]) != mp.end()){
            if(abs(mp[nums[i]] - i) <= k){
                return true;
            }
        }
        mp[nums[i]] = i;
    }
    return false;
    }




int main(){
    
    return 0;
}
