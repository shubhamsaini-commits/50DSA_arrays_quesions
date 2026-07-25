class Solution {
public:
    int maxProduct(int n) {
       
        int max = 0, secMax=0;
        int rem;
        while(n>0){
            rem = n%10;
            if(rem>max) {
                secMax = max;
                max = rem;
                rem = 0;
            }
            else{
                if(rem>secMax) secMax = rem;
            }
            // if(rem>secMax) secMax = rem;
            n/=10;
            // rem = n%10;
            // if(rem > secMax) secMax = rem;
            // n/=10;

        }
        
        return max* secMax;
    }
};