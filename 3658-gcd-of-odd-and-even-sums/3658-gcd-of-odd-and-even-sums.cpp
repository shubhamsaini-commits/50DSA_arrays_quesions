class Solution {
    int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n*n;
        int even = 2;
        int sum = 2;
        while(n>1){
            even+=2;
            sum+= even;
            n--;
        }
        return gcd(sum , odd);
    }
};