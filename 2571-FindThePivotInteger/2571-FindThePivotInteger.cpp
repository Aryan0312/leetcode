// Last updated: 8/17/2026, 9:20:21 AM
class Solution {
public:
    int pivotInteger(int n) {
        int prefixSum = 0;
        int sumOfAllIntegers = (n*(n+1))/2;
        unordered_map<int,int> map;
        for(int i = 1;i<=n;i++){    
            int rightSum = sumOfAllIntegers - prefixSum;
            prefixSum+= i;

            if(rightSum == prefixSum){
                return i;
            }
        }

        return -1;
    }
};