class Solution {
public:
    char lowerCase(char c)
    {
        if(c >= 'A' && c <= 'Z')
            return c - 'A' + 'a';
        return c;
    }
    string toLowerCase(string s) {
        string res = "";
        for(int i = 0;i<s.size();i++)
        {
            res += lowerCase(s[i]);
        }
        return res;
    }
};