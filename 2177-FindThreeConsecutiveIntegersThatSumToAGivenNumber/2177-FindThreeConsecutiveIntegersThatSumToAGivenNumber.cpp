// Last updated: 9/7/2026, 11:10:29 PM
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