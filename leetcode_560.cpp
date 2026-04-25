// subarray sum equals K
//given an array of integers nums and an integer k
// return the total number of subarrays whose sum equals to k  





// THE IDEA!!!
// while iterating ... if k - prefixSum[i] exists in array then it means that particular subarray is valid 
// we can store every prefix sum seen so far in hash map

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int subAraaySum(vector <int> &nums , int k){
    unordered_map <int , int> mp;

    int  right , pSum = 0 , count = 0;
    mp[0] = 1;
    for(right = 0 ; right < nums.size() ; right++){
        
        pSum+=nums[right];
        if(mp.find(pSum  - k) != mp.end()){
                count+= mp[pSum  - k];
        }
        mp[pSum]++;
    }
    return count;
}


int main(){
    vector <int> nums ={1 , 1 , 1};
    int k = 2;
    
    cout<<subAraaySum(nums , k);
    return 0;
}
