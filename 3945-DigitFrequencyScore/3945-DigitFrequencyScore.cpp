// Last updated: 9/7/2026, 11:08:09 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> score;

        while(n >0){
            int digit = n % 10;
            score[digit] += digit;
            n/=10;
        }

        int finalScore = 0;
        for(auto it: score){
            finalScore += it.second;
        }

        
        return finalScore;
        
    }
};