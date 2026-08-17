// Last updated: 8/17/2026, 9:21:48 AM
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26);

        for(auto ch : text){
            
            freq[ch - 'a']++;

        }


        int minChar = INT_MAX;

        minChar = min(freq['b' -'a'],minChar);//b
        minChar = min(freq['a' -'a'],minChar);//a
        minChar = min(freq['l' -'a']/2,minChar);//l
        minChar = min(freq['o' -'a']/2,minChar);//o
        minChar = min(freq['n' -'a'],minChar);//n

        return minChar;

    }
};