class Solution {
    int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n;
        int sum = n*(n+1);
        
       while (odd != 0) {
        int rem = sum % odd;
        sum = odd;
        odd = rem;
    }
    return sum;
    }
};