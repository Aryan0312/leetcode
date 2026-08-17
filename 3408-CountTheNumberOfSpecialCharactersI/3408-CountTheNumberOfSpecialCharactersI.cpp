// Last updated: 8/17/2026, 9:19:52 AM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        int n = word.size();
        map<char,pair<bool,bool>> ans;
        int count = 0;
        for(int i =0;i<n;i++){
            if(word[i]>= 'A' && word[i]<='Z' && ans[(char)(word[i]+32)].second != true){
                ans[(char)(word[i]+32)].second = true;

            }
            
            ans[word[i]].first = true;

        }

        for(auto it:ans){
            if(it.second.first == true && it.second.second == true){
                count++;
            }
        }

        return count;
        
    }
};