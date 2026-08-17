// Last updated: 8/17/2026, 9:24:51 AM
class Solution {
private:
    int convert(char c){
        switch(c){
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            default:
                return 1;
        }


    }
public:
    int romanToInt(string s) {
     int n = s.size();

     int ans = 0;
     int first = 0;
     int second = 0;

     for(int i =0;i<n - 1;i++){
        first = convert(s[i]);
        second = convert(s[i+1]);

        
        if(first >= second){
            ans +=first;
        }else{
            ans += (second - first);
            i++;
        }
        
     }

    if(n == 1 || convert(s[n - 2]) >= convert(s[n - 1])){
        ans += convert(s[n - 1]);
    }

     return ans;

    }
};