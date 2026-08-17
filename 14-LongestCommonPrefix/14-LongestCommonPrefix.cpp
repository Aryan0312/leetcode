// Last updated: 8/17/2026, 9:24:50 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string prefix = strs[0];
        for(int i =1;i<n;i++){
            int m = prefix.size();
            string temp = "";

            for(int j=0;j<m;j++){
                if(strs[i][j] == prefix[j]){
                    temp+= prefix[j];
                }else{
                    break;
                }

            }

            if(prefix.size() == 0){
                break;
            }

            prefix = temp;

        }

        return prefix;
    }
};