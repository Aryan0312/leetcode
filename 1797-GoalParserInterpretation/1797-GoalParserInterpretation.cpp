// Last updated: 8/17/2026, 9:21:15 AM
class Solution {


public:
    string interpret(string command) {
        int n = command.size();
        
        string ans = "";

        for(int i =0;i<n;i++){
            
            if(command[i] == 'G'){
                ans += 'G';
            }else if(command[i] == '(' && command[i+1] == ')'){
                ans+= 'o';
                i++;
            }else{
                ans+="al";
                i+=3;
            }
            
        }

        return ans;
    }
};