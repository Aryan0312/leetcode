// Last updated: 9/7/2026, 10:52:15 PM
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        string ans = "";
        string word = "";

        for (int i = n - 1; i >= 0; i--) {

            // If the current character is not a space,
            // keep building the current word.
            // Since we are traversing from right to left,
            // add the character at the front of the word.
            if (s[i] != ' ') {
                word = s[i] + word;
            }

            // If we encounter a space and word is not empty,
            // it means we have completed one whole word.
            else if (!word.empty()) {

                // If ans already contains a word,
                // add one space before adding the next word.
                // This avoids extra spaces in the final answer.
                if (!ans.empty()) {
                    ans += " ";
                }

                // Add the completed word to the answer.
                ans += word;

                // Reset word so we can start building
                // the next word.
                word = "";
            }
        }

        // The leftmost word may not have a space before it,
        // so it might still remain inside 'word' after the loop.
        if (!word.empty()) {

            // Add a space only if ans already contains a word.
            if (!ans.empty()) {
                ans += " ";
            }

            ans += word;
        }

        return ans;
    }
};