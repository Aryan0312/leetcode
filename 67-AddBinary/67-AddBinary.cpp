// Last updated: 8/18/2026, 11:54:38 AM
class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string ans = "";

        while(i >= 0 || j >= 0 || carry > 0){
            int sum = carry;

            if(i>=0){
                sum += a[i] - '0';
                i--;
            }

            if(j>=0){
                sum += b[j] - '0';
                j--;
            }

            ans.push_back(char('0'+sum % 2));

            carry = sum /2;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};