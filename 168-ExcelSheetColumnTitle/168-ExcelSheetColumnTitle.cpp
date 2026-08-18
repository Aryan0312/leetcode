// Last updated: 8/18/2026, 11:40:13 PM
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while(columnNumber > 0){
            columnNumber--;
            ans += char('A' + (columnNumber % 26));
            columnNumber /= 26;
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};