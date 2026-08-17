// Last updated: 8/17/2026, 9:20:25 AM
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long n = num /3;

        if((n + (n-1) + (n+1)) == num){
            return {n-1,n,n+1};
        }
        return {};
    }
};