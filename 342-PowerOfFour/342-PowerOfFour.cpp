// Last updated: 9/7/2026, 10:51:37 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0 ){
            return false;

        }

        long long x = 1;
        while(x < n ){
            x*=4;
        }

        return x == n;

    }
};