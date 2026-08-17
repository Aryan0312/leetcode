// Last updated: 8/17/2026, 9:23:22 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                
                if(matrix[i][j] == target){
                    return true;
                }

            }
        }

        return false;
        

    }
};