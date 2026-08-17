// Last updated: 8/17/2026, 9:21:22 AM
class Solution {
private:
    bool forcePossible(vector<int>& position, int m,int force){
        int n = position.size();
        int mPlaced = 1;
        int idx = 0;
        for(int i =0;i<n;i++){
            int f = position[i] - position[idx];
            if(f >= force){
                mPlaced++;
                idx = i;
            }

            if(mPlaced >= m){
                return true;
            }
        }

        return false;

    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low = 1;
        int high = position.back() - position.front();

        while(low <= high){
            int force = low+(high-low)/2;


            if(forcePossible(position,m,force)){
                low = force + 1;

            }else{
                high = force - 1;
            }
        }

        return high;
    }
};