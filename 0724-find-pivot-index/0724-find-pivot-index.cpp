class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prevSum = 0;
        int totalSum = 0;
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            if(i == j){
                totalSum+= nums[i];
                break;
            }
            totalSum+= nums[i]+ nums[j];
            i++;
            j--;
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