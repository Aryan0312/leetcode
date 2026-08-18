// Last updated: 8/18/2026, 12:46:27 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4        
5        if(n<= 2){
6            return n;
7        }
8
9        int prev = 1;
10        int next = 2;
11        int sum = 0;
12
13
14        for(int i =3;i<=n;i++){
15            sum = prev + next;
16
17            prev = next;
18            next = sum;     
19        }
20
21        return sum;
22    }
23};