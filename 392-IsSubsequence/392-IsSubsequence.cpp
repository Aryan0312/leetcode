// Last updated: 8/17/2026, 9:22:55 AM
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n = s.size();
        int m = t.size();

        int index = 0;
        for(int i =0;i<n;i++){

            bool found = false;
            for(int j = index;j<m;j++){
                if(s[i] == t[j]){
                    found = true;
                    index = j+1;
                    break;
                }
            }

            if(!found){
                return false;
            }
        }

        return true;
    }
};