class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        unordered_map<int , int> mp;
        mp[-1] = 0;
        mp[nums.size()] = 0;
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+= nums[i];
            mp[i] = sum;
        }

        for(int i = 0; i < nums.size(); i++){
            if(mp[i-1] == mp[nums.size()-1] - mp[i]){
                return i;
            }
        }
        return -1;
    }
};