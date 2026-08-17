// Last updated: 8/17/2026, 9:19:17 AM
class Solution {
public:
    int mirrorDistance(int n) {
        int reversed = 0;
        int copy = n;
        while(copy >0){
            reversed = reversed *10 + (copy%10);
            copy /=10;
        }
        int mirrDist = abs(n - reversed);

        return mirrDist;
    }
};