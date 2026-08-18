// Last updated: 8/18/2026, 11:38:40 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
            int maxWord = 0;
        for(int i =0;i<sentences.size();i++){
            int m = sentences[i].size();
            int wordCount = 0;
            for(int j=0;j<m;j++){
                if(sentences[i][j] == ' '){
                    wordCount++;
                }
            }

            maxWord = max(wordCount+1, maxWord);
        }

        return maxWord;
    }
};