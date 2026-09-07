// Last updated: 9/7/2026, 11:10:24 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 0;

        if(n % 2 == 0){
            return max(n,2);
        }

        return 2*n;
        
    }
};