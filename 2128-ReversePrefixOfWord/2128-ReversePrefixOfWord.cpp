// Last updated: 8/17/2026, 9:20:52 AM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        // find the index , where found reverse and then concat 

        int n = word.size();
        int idx = -1;
        

        for(int i =0;i<n;i++){
            if(word[i] == ch){
                idx = i; 
                break;
            }
        }

        if(idx == -1){
            return word;
        }

        

        reverse(word.begin(),word.begin()+idx +1);
        

        return word;
        

    }
};