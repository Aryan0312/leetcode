// Last updated: 9/7/2026, 10:51:40 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        long long x = 1;

        while(x < n){
            x*= 3;
        }

        return x == n;
    }
};