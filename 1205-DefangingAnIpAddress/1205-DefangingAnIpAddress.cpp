// Last updated: 8/17/2026, 9:21:58 AM
class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();

        string add = "[.]";
        string ans = "";
        for(int i =0;i<n;i++){
            if(address[i] == '.'){
                ans += add;

                continue; 
            }

            ans+= address[i]; 

        }

        return ans;


    }
};