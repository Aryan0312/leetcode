// Last updated: 8/17/2026, 9:22:18 AM
class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();

        for(int i =0;i<n;i++){
            if(isupper(s[i])){
                s[i] = (char)(s[i] + 32); 
            }
        }

        return s;

    }
};