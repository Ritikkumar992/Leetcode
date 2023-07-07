class Solution {
public:
    string reverseWords(string s) {
        int i =0, j = 0;
        while(i < s.size())
        {
            while(s[j] != ' ' && j<s.size())
                j++;
            reverse(s.begin()+i, s.begin()+j);
            i = j+1;
            j = i;
        }
        return s;
    }
};