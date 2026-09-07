// Last updated: 9/7/2026, 11:08:39 PM
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