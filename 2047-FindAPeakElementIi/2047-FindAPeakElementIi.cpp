// Last updated: 9/4/2026, 3:59:06 AM
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();


        int low =0;
        int high = n-1;

        while(low<=high){
            int mid = low+(high -low)/2;
            int col = max_element(mat[mid].begin(),mat[mid].end()) - mat[mid].begin();
            int top = (mid - 1) >= 0 ? mat[mid-1][col] : -1;
            int bottom = (mid + 1) < n  ? mat[mid + 1][col] : -1;


            if(mat[mid][col] > top && mat[mid][col] > bottom){
                return {mid,col};
            }else if(mat[mid][col] < top){
                high = mid -1;
            }else{
                low = mid+1;
            }

        }

        return {-1,-1};

    }
};