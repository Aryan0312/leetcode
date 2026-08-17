// Last updated: 8/17/2026, 9:23:57 AM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result; 
        long long first = 1;
        result.push_back(first);

        for(int i = 1;i<=rowIndex;i++){
            first = first* (rowIndex+1-i)/i;

            result.push_back(first);
        }
        return result;
    }
};