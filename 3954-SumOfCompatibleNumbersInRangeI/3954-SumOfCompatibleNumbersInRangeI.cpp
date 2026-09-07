// Last updated: 9/7/2026, 11:08:20 PM
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum =0;
        for(int i = (max(n-k,1)) ;i<=n+k;i++){
            if((n & i) == 0){
                sum+=i;
            }
        }

        return sum;
    }
};