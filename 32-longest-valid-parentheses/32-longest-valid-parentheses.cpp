class Solution {
public:
    int longestValidParentheses(string s) {
        //Using Two Pointer Approach: Time:O(n) and Space:O(1)
        int maxLen = 0;
        int left = 0, right = 0;
        //traversal from left side to right side:
        for(int i = 0;i<s.size();i++){
            if(s[i] == '(')
                left++;
            else
                right++;
            if(left == right)
                maxLen = max(maxLen, right*2);
            else if(right >= left)
                left = 0, right = 0;
        }
        // reset the left and right pointer and traverse from right to left side:
        left = 0, right = 0;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i] == '(')
                left++;
            else
                right++;
            if(left == right)
                maxLen = max(maxLen, 2*left);
            else if(left >= right)
                left = 0, right = 0;
        }
        return maxLen;
    }
};