// Last updated: 8/17/2026, 9:19:01 AM
class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 1;

        while(n>0){
            int lastDigit = n%10;

            digitSum += lastDigit;
            squareSum += (lastDigit*lastDigit);
            if((squareSum - digitSum) >= 50){
                return true;
            }
            n/=10;
        }

        return false;

        
    }
};