// Last updated: 9/7/2026, 11:10:01 PM
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24; 
    }
};