// Last updated: 9/7/2026, 11:09:48 PM
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