// Last updated: 9/7/2026, 11:09:51 PM
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> st;
        
        for(int i =0;i<s.size();i++){

            st.insert(s[i]);
        }

        return st.size();
    }
};