// Last updated: 8/17/2026, 9:22:52 AM
class Solution {
public:
    bool isPossible(vector<int> &nums,int k,int maxSum){
        int n = nums.size();
        int runningSum = 0;

        // the number of subarrays , because subarrays should not exceed k 
        int subArrays = 1;
        for(int i=0;i<n;i++){

            if(runningSum +nums[i] <= maxSum){
                runningSum += nums[i];
            }else{
                runningSum = nums[i];
                subArrays++;
            }

            if(subArrays > k){
                return false;
            }


        }

        return true;

    }
public:
    int splitArray(vector<int>& nums, int k) {
        // keep pushing the largest sum to the left , by setting the largest sum 
        // then keep guessig if its , possible , if possible , just go left

        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int maxSum = low+(high - low)/2;

            if(isPossible(nums,k,maxSum)){
                high= maxSum - 1;
            }else{
                low = maxSum + 1;
            }
        }

        return low;
    }
};