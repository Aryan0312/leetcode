// Last updated: 8/17/2026, 9:24:17 AM
class Solution {
public:
    int mySqrt(int x) {
        int low =1;
        int high = ceil(x/2.0);

     
        while(low<=high){
            long long mid = low+(high-low)/2;

            if(mid*mid <= x){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return high;
    }
};