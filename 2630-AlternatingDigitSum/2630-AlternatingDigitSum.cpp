// Last updated: 8/17/2026, 9:20:16 AM
class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int numOfDigits = floor(log10(n)) + 1;
        int isPositive = true; 


        if(numOfDigits % 2 == 0){
            isPositive = false; 
        }

        for(int i = 0;n>0;i++){
            int lastDigit = n%10;

            if(isPositive){
                sum = sum + lastDigit;
            }else{
                sum = sum - lastDigit;
            }

            isPositive = !isPositive;
            n = n /10;
            }

        return sum;

        }
};