// Last updated: 8/18/2026, 11:40:12 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int ans = 0;

        for(int i =0;i<n;i++){
            int digit = int(columnTitle[i] - 'A') + 1;
            ans = ans*26 + digit;
        }

        return ans;
    }
};