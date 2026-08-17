// Last updated: 8/17/2026, 9:23:41 AM
class Solution {
public:
// boyer-moore voting algorithm
// states that start with the first element and take it as our element now if we find different element that it then reduce the counter else keep increasing the counter and when counter turns 0 you take the current element and then start counting again , mathematically because the element occurs more than n/2 times then the element will survive this elimination 
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int currElement = -1;
        for(int i = 0;i<n;i++){
            if(count == 0){
                currElement = nums[i];
            }

            if(nums[i] == currElement){
                count++;
            }else{
                count--;
            }
        }

        // since it is guaranteed that there will be a majority element 
        return currElement;
    }
};