// Last updated: 8/17/2026, 9:25:01 AM
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ansRow(numRows,"");

        if(numRows == 1){
            return s;
        }

        int index = 0;
        bool goingDown = true;
        for(int i = 0;i<s.size();i++){
            ansRow[index] += s[i];

            // logic for changing direction
            if(index == numRows - 1){
                goingDown = false;
            }else if(index == 0){
                goingDown = true;
            }

            if(goingDown){
                index++;
            }else{
                index--;
            }

        }
        string d = "";
        for(int i =0;i<ansRow.size();i++){
            d += ansRow[i];
        }

        return d;
    }
};