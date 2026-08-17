// Last updated: 8/17/2026, 9:22:32 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> freq;
        int prefixSum = 0;
        freq[0]++;
        int sumCount =0;

        for(int i =0;i<n;i++){
            prefixSum += nums[i];
            int remaining = prefixSum -k;
            if(freq.find(remaining) != freq.end()){
                sumCount += freq[remaining];
            }

            freq[prefixSum]++;
        }

        return sumCount;
    }
};