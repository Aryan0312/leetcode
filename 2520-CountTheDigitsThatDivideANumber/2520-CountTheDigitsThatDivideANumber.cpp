// Last updated: 9/7/2026, 11:10:14 PM
class Solution {
public:
    int countDigits(int num) {
        string n = to_string(num);
        int ans = 0;
        for(int i = 0;i<n.size();i++){
            
            if(num % (n[i] - '0') == 0){
                ans++;
            } 
        }
        return ans;
    }
};