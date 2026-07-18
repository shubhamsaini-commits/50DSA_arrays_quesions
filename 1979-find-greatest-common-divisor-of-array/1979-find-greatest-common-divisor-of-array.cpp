class Solution {
public:
    int findGCD(vector<int>& nums) {
       int max = INT_MIN;
       int min = INT_MAX;
       for(int x: nums){
        if(x>max){
            max = x;
        }
        if(x<min){
            min = x;
        }
       }
       int rem;
       while(min != 0){
        rem = max % min;
        max = min;
        min = rem;
       }
       return  max;
    }
};