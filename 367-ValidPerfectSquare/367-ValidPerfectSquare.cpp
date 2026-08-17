// Last updated: 8/17/2026, 9:23:04 AM
class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num/2;

        if(num == 1){
            return true;
        }

        while(low<= high){
            long long  mid =low+(high - low)/2;
            long long square = mid*mid;
            if(square == num){
                return true;
            }else if(square > num){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return false;
    }
};