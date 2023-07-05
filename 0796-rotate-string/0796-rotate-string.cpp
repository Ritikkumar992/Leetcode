class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size(), m = goal.size();
        if(n != m)
            return false;
        if(n == 0)
            return true;
        s += s;
        for(int i = 0;i<=m;i++)
        {
            if(s.substr(i,m) == goal)
                return true;
        }
        return false;
    }
};