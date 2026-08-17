// Last updated: 8/17/2026, 9:22:37 AM
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;

        int sumCount = 0;
        for(int i =0;i<n;i++){
            int sum =0;
            for(int j =i;j<n;j++){
                sum+= nums[j];

                if(sum == k){
                    sumCount++;
                }
            }
        }

        return sumCount;
    }
}