// Last updated: 8/17/2026, 9:24:27 AM
class Solution {
public:
    int lowerBound(vector<int>& nums, int target, int n){
        int low = 0;
        int high = n-1;

        while(low<= high){
            int mid = low+(high -low)/2;

            if(nums[mid] >= target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return low;
    }

    int upperBound(vector<int>& nums, int target, int n){
        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low+(high -low)/2;
            
            if(nums[mid] > target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return low;
    }


    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        if(n == 0){
            return {-1,-1};
        }
        int low = lowerBound(nums,target,n);
        int high= upperBound(nums,target,n);

        if(low == n|| nums[low] != target){
            return {-1,-1};
        }
        
        return { low, high-1};
        
 
    }
};