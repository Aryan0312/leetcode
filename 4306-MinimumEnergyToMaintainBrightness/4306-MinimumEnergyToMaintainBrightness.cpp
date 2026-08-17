// Last updated: 8/17/2026, 9:19:13 AM
class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<long long >> adjInterval;
        long long start = intervals[0][0];
        long long end = intervals[0][1];
        for(int i = 1;i<intervals.size();i++){
            if(end >= intervals[i][0]){
                start = min(start,(long long)intervals[i-1][0]);
                end = max(end,(long long)intervals[i][1]);
            }else{
                adjInterval.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        
        adjInterval.push_back({start,end});

        long long totalInterval = 0;
        for(int i =0;i<adjInterval.size();i++){
            cout<<adjInterval[i][0]<<" "<<adjInterval[i][1];
            totalInterval += (adjInterval[i][1] - adjInterval[i][0]) + 1;
        }
        
        long long bulbs = ceil((double)brightness/3);
        return bulbs * totalInterval;
    }
};