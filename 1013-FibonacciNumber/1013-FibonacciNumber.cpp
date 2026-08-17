// Last updated: 8/17/2026, 9:22:05 AM
class Solution {
public:
    int fib(int n) {
        // base case
        if(n <= 1){
            return n;
        }

        return fib(n-1) + fib(n-2);
    }
};