class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0, p2 = s.length() - 1;
        while (p1 < p2) {
            // Skip non-alphanumeric
            while (p1 < p2 && !isalnum(s[p1])) p1++;
            while (p1 < p2 && !isalnum(s[p2])) p2--;

            // Compare after lowering case
            if (tolower(s[p1]) != tolower(s[p2])) return false;

            p1++;
            p2--;
        }
        return true;
    }
};

