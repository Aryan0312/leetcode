// Last updated: 8/18/2026, 11:38:21 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {(celsius + 273.15),(celsius * 1.80 +32.00)};
    }
};