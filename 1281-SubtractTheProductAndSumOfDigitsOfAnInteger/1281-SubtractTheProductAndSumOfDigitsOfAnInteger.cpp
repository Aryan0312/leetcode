// Last updated: 9/7/2026, 11:12:22 PM
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