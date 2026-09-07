// Last updated: 9/7/2026, 10:51:53 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        if( !(n & (n - 1))){
            return true;
        }   

        return false;
    }
};