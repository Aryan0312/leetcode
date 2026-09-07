// Last updated: 9/7/2026, 11:08:12 PM
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