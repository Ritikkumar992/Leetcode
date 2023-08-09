class Solution {
public:
    bool isPalindrome(string& s, int i = 0, int j = -1) {
        if (j == -1) {
            j = s.size() - 1;
        }
        
        if (i >= j) {
            return true;
        }
        
        if (!isalnum(s[i])) {
            return isPalindrome(s, i + 1, j);
        } else if (!isalnum(s[j])) {
            return isPalindrome(s, i, j - 1);
        } else if (tolower(s[i]) != tolower(s[j])) {
            return false;
        } else {
            return isPalindrome(s, i + 1, j - 1);
        }
    }
};
