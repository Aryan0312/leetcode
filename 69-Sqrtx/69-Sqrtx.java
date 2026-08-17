// Last updated: 8/17/2026, 9:24:23 AM
class Solution {
    public int mySqrt(int x) {

        if(x == 0){
            return 0;
        }
        int num = 1;
        for(int i =1;i<=x/i;i++){
            if(i*i == x){
                return i;

            }
            num = i;
        }
        return num;
    }
}