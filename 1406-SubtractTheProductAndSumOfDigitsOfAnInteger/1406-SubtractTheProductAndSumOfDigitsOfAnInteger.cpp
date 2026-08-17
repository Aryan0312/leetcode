// Last updated: 8/17/2026, 9:21:47 AM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        while(n){
            int digit = n%10;
            product *= digit;
            sum += digit;

            n/=10;
        }

        return product - sum;
    }
};