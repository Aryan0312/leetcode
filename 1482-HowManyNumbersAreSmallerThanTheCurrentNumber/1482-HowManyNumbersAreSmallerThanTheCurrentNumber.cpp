// Last updated: 8/17/2026, 9:21:38 AM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        // counting sort 

        // first create a freq array
        vector<int> buckets(101,0);

        for(int i =0;i<n;i++){
            buckets[nums[i]]++;
        }

        // then create prefixSum 
        // it will store how many elements were there before each element in sorted order 
        for(int i =1;i<buckets.size();i++){
            buckets[i] += buckets[i-1];
        }


        vector<int> result(n);

        for(int i =0;i<n;i++){
            if(nums[i] == 0){
                result[i] =0;
            }else{

                result[i] = buckets[nums[i] - 1];
            }
        }


        return result;
    }
};