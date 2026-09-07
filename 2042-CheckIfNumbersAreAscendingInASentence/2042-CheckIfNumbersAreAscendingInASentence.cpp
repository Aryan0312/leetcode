// Last updated: 9/7/2026, 11:10:56 PM
class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> temp;
        int curr = 0;
        int prev = -1;
        for(int i =0;i<s.size();i++){
           
            if(s[i] >= '0' && s[i] <= '9' ){
                curr= curr*10 + (s[i]-'0');
            }else{
                if(curr>0){
                    if(prev >= curr){
                        return false;
                    }
                    prev = curr;
                }
                curr =0;
            }
            
            
        }
        if(curr != 0 && prev >= curr){
            return false;
        }
        
        return true;
    }
}; 