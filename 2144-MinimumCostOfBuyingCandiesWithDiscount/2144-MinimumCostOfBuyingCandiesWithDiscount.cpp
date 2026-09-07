// Last updated: 9/7/2026, 11:10:40 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        
        sort(cost.begin(),cost.end());
        int count =1;
        int minCost = 0;
        for(int i =n-1 ;i>=0;i--){
            if(count % 3 == 0){
                count++;
                continue;
            }

            minCost += cost[i];
            count++;
        }

        return minCost;
    }
};