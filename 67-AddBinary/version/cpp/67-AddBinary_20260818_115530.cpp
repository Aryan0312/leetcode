// Last updated: 8/18/2026, 11:55:30 AM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4
5        int i = a.size() - 1;
6        int j = b.size() - 1;
7        int carry = 0;
8        string ans = "";
9
10        while(i >= 0 || j >= 0 || carry > 0){
11            int sum = carry;
12
13            if(i>=0){
14                sum += a[i] - '0';
15                i--;
16            }
17
18            if(j>=0){
19                sum += b[j] - '0';
20                j--;
21            }
22
23            ans.push_back(char('0'+sum % 2));
24
25            carry = sum /2;
26
27        }
28        reverse(ans.begin(),ans.end());
29        return ans;
30    }
31};