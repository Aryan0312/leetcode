// Last updated: 8/17/2026, 9:23:05 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size();
       int n2 = nums2.size();

        unordered_set<int> mySet;

       for(int i =0;i<n1;i++){
            for(int j =0;j<n2;j++){
                if(nums2[j] == nums1[i]){
                    mySet.insert(nums1[i]);
                }
            }    
       }

        vector<int> ans(mySet.begin(),mySet.end());
        return ans;
    }
};