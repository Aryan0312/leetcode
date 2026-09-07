// Last updated: 9/7/2026, 11:11:19 PM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
    


        int x = coordinates[0] - 'a';
        int y = (coordinates[1] - '0') - 1;

        if((x+y)% 2 == 0){
            // even 
            return false;
        }

        return true;
    }
};