// Last updated: 8/17/2026, 9:24:00 AM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i =1 ;i<=numRows;i++){
            vector<int> temp;
            int first = 1;
            temp.push_back(first);
            for(int j =1;j<i;j++){
                first = first* (i-j)/j;
                temp.push_back(first);
            }
            result.push_back(temp);
        }
        return result;
    }
};