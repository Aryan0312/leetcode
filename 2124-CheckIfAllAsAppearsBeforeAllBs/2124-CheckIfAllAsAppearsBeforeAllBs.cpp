// Last updated: 9/7/2026, 11:10:49 PM
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