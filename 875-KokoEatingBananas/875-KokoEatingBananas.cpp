// Last updated: 9/7/2026, 11:12:51 PM
class Solution {
private:
    int isPossible(vector<int>& piles,int bPerHr,int timeLimit){
        int n = piles.size();

        long long  h =0;
        for(int i =0;i<n;i++){
            h += ceil(piles[i]/(double)bPerHr);
            if(h > timeLimit){
                return false;
            }
        }
       

        return true;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long  high = *max_element(piles.begin(),piles.end());

        while(low<= high){
            long long mid = low+(high-low)/2;

            if(isPossible(piles,mid,h)){
                high  = mid-1;
            }else{
                low = mid+1;
            }
        }      

        return low;
    }
};