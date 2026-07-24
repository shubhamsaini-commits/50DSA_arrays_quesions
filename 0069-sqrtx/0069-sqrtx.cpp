class Solution {
public:
    int mySqrt(int x) {
        if(x == 1) return 1;
        int i = 0;
        int j = x;
        long long mid;
        long long ans= 0;
        while(i<=j){
            mid = i+ (j-i)/2;
            if(mid*mid == x) return mid;
            else if(mid * mid > x) j = mid-1;
            else if(mid * mid < x){
                ans = max(ans , mid);
                i = mid+1;
            }
        }
        return ans;
    }
};