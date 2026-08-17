// Last updated: 8/17/2026, 9:20:31 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> positive;
        vector<int> negative;
        
        for(int i =0;i<n;i++){
            if(nums[i] <0){
                negative.push_back(nums[i]);
            }else{
                positive.push_back(nums[i]);
            }
        }

        if(positive.size() > negative.size()){
            for(int i =0;i<negative.size();i++){
                nums[2*i] = positive[i];
                nums[(2*i)+1] = negative[i];
            }

            int index = negative.size()*2;
            for(int i =negative.size();i<positive.size();i++){
                nums[index] = positive[i];
                index++;
            }
        }else{
            for(int i =0;i<positive.size();i++){
                nums[2*i] = positive[i];
                nums[(2*i)+1] = negative[i];
            }

            int index = positive.size()*2;
            for(int i =positive.size();i<negative.size();i++){
                nums[index] = negative[i];
                index++;
            }
        }

        
        return nums;
        
    }
};