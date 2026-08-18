// Last updated: 8/18/2026, 11:38:25 PM
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