// Last updated: 8/17/2026, 9:23:18 AM
class Solution {
public:
    int addDigits(int num) {
        
        
        while(num > 9){

            int ans = 0;
            while(num){
                int digit = num % 10;
                ans += digit;
                num /= 10; 
            }

            num = ans;
        }

        return num;
    }
};