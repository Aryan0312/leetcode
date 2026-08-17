// Last updated: 8/17/2026, 9:22:50 AM
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n,"");
        int a;
        int b;
        for(int i =1;i<=n;i++){
            a = i%3;
            b = i%5;
            if(a == 0 && b == 0){
                ans[i-1] = ("FizzBuzz");
            }else if(a == 0){
                ans[i-1] = ("Fizz");

            }else if(b == 0){
                ans[i-1] = ("Buzz");

            }else{
                ans[i-1] = (to_string(i));
            }
        }

        return ans;
    }
};