// Last updated: 8/18/2026, 11:40:29 PM
class Solution {
public:
    int climbStairs(int n) {
        
        if(n<= 2){
            return n;
        }

        int prev = 1;
        int next = 2;
        int sum = 0;


        for(int i =3;i<=n;i++){
            sum = prev + next;

            prev = next;
            next = sum;     
        }

        return sum;
    }
};