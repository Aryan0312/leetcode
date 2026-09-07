// Last updated: 9/7/2026, 11:12:33 PM
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