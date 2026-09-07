// Last updated: 9/7/2026, 11:10:54 PM
class Solution {
private:
    bool isPossible(int n, vector<int>& quantities,int mid){
        int m = quantities.size();
        int shops = 0;
        for(int i=0;i<m;i++){
            shops += quantities[i] / mid;
            shops += (quantities[i] % mid) ? 1 : 0;

            if(shops > n){
                return false;
            }
        }

        return true;

    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin(),quantities.end());

        while(low<=high){
            int mid = low+(high-low)/2;

            if(isPossible(n,quantities,mid)){
                high = mid - 1;

            }else{
                low = mid+1;
            }

        }

        return low;
    }
};