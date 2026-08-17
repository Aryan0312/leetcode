// Last updated: 8/17/2026, 9:21:01 AM
class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        string curr= "";

    // break string to words
        for(int i = 0;i<s.size();i++){
            if(s[i] != ' '){
                curr+=s[i];
            }else{
                if(curr != ""){
                    words.push_back(curr);
                    curr ="";
                }
            }
        }
        if(curr != "") {
            words.push_back(curr);
        }
        vector<string> result(words.size());
        // sort and store in result 
        for(int i =0;i<words.size();i++){
            int index = words[i].back() - '0';
            words[i].back() = ' ';
            result[index - 1]  = words[i];
        }
        string finall = "";
        // store result in string 
        for(int i =0;i<result.size();i++){
            finall+= result[i];
        }
        // remove last trailing space 
        finall.pop_back();
        return finall;
    }
};