// Last updated: 8/17/2026, 9:19:26 AM
class Solution {

private:
    int giveMinFinish(vector<int>& start1, vector<int>& duration1,
                      vector<int>& start2, vector<int>& duration2) {
        int finish1 = INT_MAX;
        for (int i = 0; i < start1.size(); i++) {
            finish1 = min(start1[i] + duration1[i], finish1);
        }

        int finish2 = INT_MAX;
        for (int i = 0; i < start2.size(); i++) {
            finish2 = min(finish2, max(start2[i], finish1) + duration2[i]);
        }

        return finish2;
    }

public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int landWater = giveMinFinish(landStartTime, landDuration,
                                      waterStartTime, waterDuration);

        int waterLand = giveMinFinish(waterStartTime, waterDuration,
                                      landStartTime, landDuration);

        return min(landWater, waterLand);
    }
};