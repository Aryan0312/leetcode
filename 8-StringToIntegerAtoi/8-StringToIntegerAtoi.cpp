// Last updated: 8/17/2026, 9:24:57 AM
class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        long long num = 0;

        // skip spaces
        while(i < s.size() && s[i] == ' ') {
            i++;
        }

        // sign
        if(i < s.size() && (s[i] == '-' || s[i] == '+')) {
            if(s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        // digits
        while(i < s.size() && isdigit(s[i])) {

            num = num * 10 + (s[i] - '0');

            // overflow handling
            if(sign * num > INT_MAX) {
                return INT_MAX;
            }

            if(sign * num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * num;
    }
};