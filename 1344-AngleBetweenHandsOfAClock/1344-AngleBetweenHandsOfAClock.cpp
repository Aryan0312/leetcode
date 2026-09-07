// Last updated: 9/7/2026, 11:12:12 PM
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourAngle = (hour*30.0) + (minutes*0.5);
        double minAngle = (minutes * 6.0);

        double angle = abs(minAngle - hourAngle);

        return min(angle, 360-angle);
    }
};

// for hour hand 
// each hour is 30 degrees and for each minute the hour hand moves 0.5 degress respect to clock

// for min hand 
// each minute the min hand moves 6 degrees 