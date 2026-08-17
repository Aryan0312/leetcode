// Last updated: 8/17/2026, 9:22:36 AM
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        int prevCapital = false;
        for(int i =1;i<n;i++){
            if(i != 1 && islower(word[i]) && isupper(word[i-1])){
                return false;
            }
            if(isupper(word[i]) && islower(word[i-1])){
                return false;
            }
        }

        return true;
    }
};