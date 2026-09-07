// Last updated: 9/7/2026, 11:12:44 PM
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