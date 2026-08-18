// Last updated: 8/18/2026, 11:38:10 PM
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        return (arrivalTime + delayedTime) % 24; 
    }
};