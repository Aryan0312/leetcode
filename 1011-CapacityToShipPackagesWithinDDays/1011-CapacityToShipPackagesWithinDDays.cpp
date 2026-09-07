// Last updated: 9/7/2026, 11:12:40 PM
class Solution {

private:
    bool canShip(vector<int>& weights, int days, int capacity){
        int n = weights.size();
        int rem = capacity;
        for(int i =0;i<n;i++){
            if(rem >= weights[i]){
                rem = rem - weights[i];
            }else{
                rem = capacity - weights[i];
                days--;
            }

            if(days == 0){
                return false;
            }
        }

        return true;


    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low<=high){
            int mid = low+(high-low)/2;

            if(canShip(weights, days, mid)){
                high = mid-1;
            }else{
                low = mid+1;
            }    
        }

        return low;

    }
};