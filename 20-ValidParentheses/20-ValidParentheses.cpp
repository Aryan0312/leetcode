// Last updated: 8/17/2026, 9:24:40 AM
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;

        if(n % 2 != 0){
            return false;
        }
        
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else{
                if(st.empty()){

                return false;
                }
                char top = st.top();

                if(top == '(' && ch != ')'){
                    return false;
                }else if(top == '{'&& ch != '}'){
                    return false;
                }else if(top == '['&& ch != ']'){
                    return false;
                }else{
                    st.pop();
                }
            }
        }

        if(st.empty()){

        return true;
        }

        return false;

    }
};