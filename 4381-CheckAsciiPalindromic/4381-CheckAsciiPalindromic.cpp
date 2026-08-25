// Last updated: 8/26/2026, 12:21:34 AM
class Solution {
public:
    bool isPalindromic(string s) {
        int n = s.size();
        string ascii = "";
        int asci;

        for(int i =0;i<n;i++){
            asci = s[i];
            ascii += bitset<8>(asci).to_string();
        }

        

        string rev = ascii;;
        reverse(rev.begin(),rev.end());

        return rev == ascii; 
        
    }
};