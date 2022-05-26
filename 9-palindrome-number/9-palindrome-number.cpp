class Solution {
public:
    bool isPalindrome(int x) {
        //Approach_01:  Time: O(n) and Space:O(2n)
        string s = to_string(x);
        string t = s;
        reverse(t.begin(),t.end());
        
        return t==s;
    }
};