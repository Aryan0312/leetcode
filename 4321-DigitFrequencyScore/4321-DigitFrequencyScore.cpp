// Last updated: 8/17/2026, 9:18:55 AM
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