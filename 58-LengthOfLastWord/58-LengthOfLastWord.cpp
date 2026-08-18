// Last updated: 8/18/2026, 11:54:40 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        string ans = "";

        bool found = false;

        for(int i =n-1;i>=0;i--){
            if(!found && s[i] == ' '){
                continue;
            }else{
                found = true;
            }

            if(found && s[i] != ' ' ){
                ans = s[i] + ans;
            }else{
                break;
            }


        }

        return ans.size();
    }
};