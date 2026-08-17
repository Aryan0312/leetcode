// Last updated: 8/17/2026, 9:19:45 AM
class Solution {
public:
    string compressedString(string word) {
         int n = word.size();

        int currCount = 1;
        string ans = "";
        int i;

        for (i=0; i < n-1; i++) {

            if (word[i] == word[i + 1] && currCount < 9) {
                currCount++;
            } else {
                ans += to_string(currCount);
                ans += word[i];
                currCount = 1;
            }
        }
      
        ans += to_string(currCount);
        ans += word[i];
        

    

        return ans;
    }
};