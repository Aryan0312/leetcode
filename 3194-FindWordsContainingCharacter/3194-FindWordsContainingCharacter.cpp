// Last updated: 8/18/2026, 11:37:51 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for(int i =0;i<words.size();i++){
            int m = words[i].size();
            for(int j =0;j<m;j++){
                if(words[i][j] == x){
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
    }
};