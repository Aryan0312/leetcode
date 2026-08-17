// Last updated: 8/17/2026, 9:24:54 AM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0){return true;}
        if(x<0 || x %10 == 0 ){
            return false;
        }

        int reverse = 0;
        while(x>reverse){
             reverse = (reverse*10) + (x%10);
            //  both conditions :
            // first one because if the integer length is even then the integer when half is equal to reverse half then true 
            // if the integer length is odd then the loop only runs till the reverse(right half) is smaller by one digit than the left 
            // if the left halfs n-1 digits match the right half's n then thta means the middle digit is left and the number is palindrome
             if(x == reverse || x/10 == reverse){
                return true;
             }
             x = x/10;
        }
        return false;
    }
};