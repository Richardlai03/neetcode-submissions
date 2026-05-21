class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;
        char *left = &s[0];
        char *right = &s[s.length() - 1];
        while (left < right) {
            while (left < right && !isalnum(*left)) left++;
            while (left < right && !isalnum(*right)) right--;
            if (tolower(*left) != tolower(*right)) return false;
            left++;
            right--;
        }
        return true;
    }
};
