// Last updated: 9/7/2026, 11:12:20 PM
class Solution {
private:
    int divideSum(vector<int>& nums, int divisor){
        int n = nums.size();

        int sum =0;
        for(int i =0;i<n;i++){
            sum += ceil((double)nums[i]/divisor);
        }

        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *(max_element(nums.begin(),nums.end()));

        int ans;
        while(low<=high){
            int mid = low+(high-low)/2;
            int dividedSum = divideSum(nums,mid);
            

            if(dividedSum <= threshold){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return ans;
    }
};