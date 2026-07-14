class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prevSum = 0;
        int totalSum = 0;
        for(int x: nums){
            totalSum +=x;
        }

        for(int i = 0; i < nums.size(); i++){
            if(prevSum == totalSum - prevSum - nums[i]){
                return i;
            }
            prevSum+= nums[i];
        }
        return -1;
    }
};