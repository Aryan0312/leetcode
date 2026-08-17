// Last updated: 8/17/2026, 9:20:04 AM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n = hours.size();
        sort(hours.begin(),hours.end());

        if(target > hours.back()){
            return 0;
        }
        int low = 0;
        int high = n-1;
        int start = 0;
        while(low <= high){
            int mid = low+(high - low)/2;

            if(hours[mid] >= target){
                start = mid;
                high = mid-1;
            }else{
                low= mid+1;
            }
        }

        return n - start;
    }

};