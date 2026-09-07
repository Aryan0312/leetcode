// Last updated: 9/7/2026, 11:13:00 PM
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