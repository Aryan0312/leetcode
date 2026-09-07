// Last updated: 9/7/2026, 11:12:29 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

    
        int maxi = -1;
        
        for(int i =n-1;i>=0;i--){
           int current = arr[i];
            arr[i] = maxi;
            maxi = max(maxi,current);
         
        }


        return arr;
    }
};