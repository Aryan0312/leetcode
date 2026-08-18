// Last updated: 8/18/2026, 11:38:27 PM
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