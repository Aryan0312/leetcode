// Last updated: 8/17/2026, 9:18:57 AM
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