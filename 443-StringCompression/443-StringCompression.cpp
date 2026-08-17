// Last updated: 8/17/2026, 9:22:48 AM
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        if (n < 1) {
            return 0;
        }
        int currCount = 1;
        string ans = "";
        ans += chars[0];

        for (int i = 1; i < n; i++) {
            if (chars[i] == chars[i - 1]) {
                currCount++;
            } else {
                if (currCount != 1) {

                    ans += to_string(currCount);
                }
                currCount = 1;
                ans += chars[i];
            }
        }
        if (currCount != 1) {

            ans += to_string(currCount);
        }

        
        for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }

        return ans.size();
    }
};