// Last updated: 9/7/2026, 10:51:24 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());

        int n = ransomNote.size();
        int m = magazine.size();

        if(n > m){
            return false;
        }

        int idx = 0;
        for(int i =0;i<m;i++){
            if(idx >= n){
                return true;
            }
            int letter = (ransomNote[idx]) - '0';


            if(letter == magazine[i] - '0'){
                idx++;


            }else if(letter > magazine[i] - '0'){
                continue;
            }else{
                return false;
            }
        }

        if(idx >= n){
                return true;
        }

        return false;

    }
};