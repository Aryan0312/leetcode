// Last updated: 8/17/2026, 9:25:00 AM
class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x!=0){
            if(reverse > INT_MAX/10 ||reverse/10 == INT_MAX/10 && reverse%10 > INT_MAX%10){
                return 0;
            }
            if(reverse < INT_MIN/10 ||(reverse/10 == INT_MIN/10 && reverse%10 < INT_MIN%10)){
                return 0;
            }
            reverse = (reverse*10)+ x%10;
            x = x/10;
        }

        return reverse;
    }
};