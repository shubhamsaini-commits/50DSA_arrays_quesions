class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        bool hasOneZero = false;
        bool hasMoreZero = false;
        
        for(int x : nums){
            if(hasOneZero && x==0)
                hasMoreZero = true;
            if(x!=0)
                prod*= x;
            else
                hasOneZero = true;
                
        }
        vector<int> ans;
        for(int x: nums){
            if(x!=0 && !(hasOneZero))
                ans.push_back(prod/x);
            if(x!=0 && hasOneZero && !(hasMoreZero))
                ans.push_back(0);
            if(x==0 && hasOneZero && !(hasMoreZero))
                ans.push_back(prod);
            if(hasMoreZero) 
                ans.push_back(0);
        }
        return ans;
    }
};