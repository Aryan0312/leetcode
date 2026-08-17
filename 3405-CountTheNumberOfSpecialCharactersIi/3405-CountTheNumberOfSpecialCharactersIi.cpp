// Last updated: 8/17/2026, 9:19:53 AM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26,-1);
        vector<int> upper(26,-1);
        int count = 0;

        for(int i= 0;i<word.size();i++){
            if(islower(word[i])){
                // if lower found just update the index it occured
                lower[word[i] - 'a'] = i;
            }else{

                if(upper[word[i] - 'A'] == -1){
                    // if upper found for the first time update the index 
                    upper[word[i] - 'A'] = i;

                }
            }
        }

        for(int i=0;i<26;i++){
            if(upper[i] != -1 && lower[i] == -1){
                // if upper is  found and lower is not found then continue
                continue;
            }else if(lower[i] < upper[i]){
                // if the very first element of upper comes after the last element of lower then we increase the count
                count++;
            }
        }

        return count;
    }
};