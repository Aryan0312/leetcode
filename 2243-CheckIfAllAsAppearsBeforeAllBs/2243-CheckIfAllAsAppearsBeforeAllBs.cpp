// Last updated: 8/17/2026, 9:20:41 AM
class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        for(int i =0;i<n-1;i++){
            if(s[i] == 'b' && s[i+1] == 'a'){
                return false;
            }
        }

        return true;
    }
};