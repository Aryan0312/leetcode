// Last updated: 9/4/2026, 3:59:33 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int n = s.size();

        vector<string> primitive;

        int open = 1;

        string curr = "";
        curr+= s[0];
        for(int i =1;i<n;i++){
            curr += s[i];
            if(s[i] == ')'){
                open--;
            }else{
                open++;
            }

            if(!open){
                primitive.push_back(curr);
                curr = "";
            }
        }

        string ans = "";
        for(int i = 0;i<primitive.size();i++){
            primitive[i] = primitive[i].substr(1,primitive[i].length() - 2);
            ans += primitive[i];
        }


        return ans;
    }
};