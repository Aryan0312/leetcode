// Last updated: 9/7/2026, 11:08:10 PM
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