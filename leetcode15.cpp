#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 3 SUM
// given an array .. return triplets such that i != j != k and sum == 0 


// void twoSum(vector<int> &nums , int target , vector<vector<int>> &ans ,int idx){
//     unordered_map <int , bool> mp;
//     for(int i = idx; i< nums.size() ; i++){
//         if(mp.find(nums[i]) == mp.end()){
//             if(mp.find(target - nums[i]) != mp.end()){
//                  ans.push_back({nums[i] , target - nums[i] , -target});
//             }
//         }

//         mp[nums[i]] = true;
//     }
// }



// vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> ans;
//       unordered_map <int , bool> mp;
        
//         for(int i = 0 ; i < nums.size(); i++){

//           if (mp.find(nums[i]) == mp.end()){
//               twoSum(nums , -nums[i]  , ans , i+1);
//               cout<<"checked"<<i<<" "<<endl;
//           }

//             mp[nums[i]] = true;
//         }
//         return ans;
//     }

// SHIT APPROACH.. GENERATES DUPLICATES


// SORTING !!!

void twoSum(vector<int> &nums , int target , vector<vector<int>> &ans ,int idx){
    unordered_map<int , int> mp;
    
    for(int i = idx+1 ; i < nums.size(); i++ ){
        if(i != idx+1 && i+1< nums.size()){
            if(nums[i] == nums[i+1]){
                continue;
            }
        }
        if(mp.find(target - nums[i]) != mp.end()){
            ans.push_back({-target , nums[i] , target - nums[i]});
        }
        mp[nums[i]]++;
    }
    
}

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin() , nums.end());
    vector<vector<int>> ans;
    for(int i = 0; i < nums.size(); i++){
        
        if(i != 0){
            if(nums[i] == nums[i-1]) continue;
        }
        twoSum(nums , -nums[i] , ans , i );

        if(i+2 <= nums.size()){
            if((nums[i]==0 && nums[i+1]==0) && (nums[i] == nums[i+2]) ){
                ans.push_back({nums[i] , nums[i+1] , nums[i+2]});
            }
        }
    }
    return ans;
}



int main(){
    vector <int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(nums);
    // cout<<ans.size();
    for(vector<int> x : ans){
        for(int y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
   

    return 0;
}
