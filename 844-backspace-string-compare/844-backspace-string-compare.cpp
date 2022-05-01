class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //Using Two pointer approach: TIme : O(1) and Space:O(n)
        string res1 = "", res2 = "";
        int i = 0;
        while(s[i] != '\0')
        {
            if(s[i] >= 'a' and s[i] <= 'z')
                res1 += s[i];
            else if(!res1.empty())
                res1.pop_back();
            i++;
        }
        int j = 0;
        while(t[j] != '\0')
        {
            if(t[j] >= 'a' and t[j] <= 'z')
                res2 += t[j];
            else if(!res2.empty())
                res2.pop_back();
            j++;
        }
        return res1 == res2;
    }
};