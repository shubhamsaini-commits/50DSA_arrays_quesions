class Solution {
    int gcd(int a , int b){
        long long rem;
        while(b != 0){
            rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixgcd;
        long long maxi = INT_MIN;
        int prefixgcdi;
        prefixgcd.reserve(nums.size());
        int i = 0;

        while(i < nums.size()){
            if(maxi < nums[i]){
                maxi = nums[i];
            }
            prefixgcdi = gcd(nums[i] , maxi);
            prefixgcd.push_back(prefixgcdi);
            i++;
        }
        sort(prefixgcd.begin() , prefixgcd.end());

        int j = prefixgcd.size()-1;
        i = 0;
        maxi = 0; // storing sum in the variable which has no use anymore
        while(i < j ){
            maxi += gcd(prefixgcd[i] , prefixgcd[j]);
            i++;
            j--;
        }
        return maxi;
    }
};