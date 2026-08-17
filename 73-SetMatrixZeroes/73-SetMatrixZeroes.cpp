// Last updated: 8/17/2026, 9:24:13 AM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<int> markedRows(rows,0);
        vector<int> markedColumns(columns,0);


        for(int i =0;i<rows;i++){
            for(int j = 0;j<columns;j++){
                if(matrix[i][j] == 0){
                    markedRows[i] =1;
                    markedColumns[j] =1;
                }
            }
        }

        for(int i =0;i<rows;i++){
            for(int j = 0;j<columns;j++){
                if(markedRows[i] || markedColumns[j]){
                    matrix[i][j]=0;
                }
            }
        }

    
        
    }
};