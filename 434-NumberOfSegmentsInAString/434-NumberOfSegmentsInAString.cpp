// Last updated: 9/7/2026, 10:50:51 PM
class Solution {
public:
    int countSegments(string s) {
       int n = s.size();

       if(n == 0){
        return 0;
       }

        int count = (s[0] != ' ') ? 1 : 0;

        for(int i =0;i<n - 1;i++){

            if(s[i] == ' ' && s[i+1] != ' '){
                count++;
            }

        }

        return count;
    }
};