// Last updated: 8/17/2026, 9:22:38 AM
class Solution {
    public String convertToBase7(int num) {

        if(num == 0){
            return "0";
        }
        boolean isNeg = false;
        if (num < 0) {
            isNeg = true;
        }

        num = Math.abs(num);

        StringBuilder str = new StringBuilder();
        int power = 1;

        while (num > 0) {

            int rem = num % 7;

            str.insert(0, rem);

            power *= 7;
            num /= 7;
        }

        if (isNeg) {
            str.insert(0, '-');
        }

        return str.toString();
    }
}