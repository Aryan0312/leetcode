// Last updated: 9/7/2026, 11:08:37 PM
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string result;
        for(int i =0;i<n;i++){
            int sum = 0;
            for(int j = 0;j<words[i].size();j++){
                sum += weights[(words[i][j] - 'a')];
            }
            sum = sum % 26;
            result += char(abs('z' - sum));
             
        }

        return result;
    }
};


