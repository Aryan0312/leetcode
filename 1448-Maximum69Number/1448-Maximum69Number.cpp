// Last updated: 8/18/2026, 11:39:09 PM
class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num);
        int ans = 0;


        for(int i =0;i<n.size();i++){
            if(n[i] == '6'){
                n[i] = '9';
                break;
            }
        }

        return stoi(n);
    }
};