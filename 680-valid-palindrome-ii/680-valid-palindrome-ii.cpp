class Solution {
bool checkPalindrome(string s, int i, int j)
{
    while(i<j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return  checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }
};