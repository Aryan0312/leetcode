// Last updated: 8/17/2026, 9:21:29 AM
class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k,int day){
        int n = bloomDay.size();
        int count =0;
        int bouquet = 0;
        for(int i =0;i<n;i++){
            if(bloomDay[i] <= day){
                count++;
            }else{
                count = 0;
            }
            if(count != 0 && count % k == 0){
                bouquet++;
                count = 0;
            }
        
            if(bouquet >= m){
                return true;
            }
        }


        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()/k < m){
            return -1;
        }
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low<= high){
            int mid = low+(high-low)/2;

            if(isPossible(bloomDay, m , k , mid)){
                high = mid - 1;
            }else{
                low = mid+1;
            }
        }

        return low;
    }
};