// Last updated: 8/18/2026, 11:37:40 PM
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int first = nums[0];
        int last = nums[n-1];

        unordered_map<int,int> freq(n);

        for(int i =0;i<n;i++){
            freq[nums[i]]++;
        }


        sort(nums.begin(),nums.end());

        if(k == 1){
            for(int i = n-1;i>=0;i--){
                if(freq[nums[i]] == 1){
                    return nums[i];
                }
                
            }
            return -1;
        }else if(k==n){
            return nums[n-1];
        }else{
            if(freq[first] == 1 && freq[last] == 1){
                return max(last,first);
            }else if(freq[first] == 1){
                return first;
            }else if(freq[last] == 1){
                return last;
            }
        }


         return -1;
    }
};