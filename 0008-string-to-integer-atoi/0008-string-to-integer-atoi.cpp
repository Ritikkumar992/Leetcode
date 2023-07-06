class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0;
        // step_01: removing white spaces.
        while(i<s.size() && s[i] == ' ')
            i++;
        // step_02: getting the substr which has only alphanumeric value.
        s = s.substr(i); // i ------------> length of string.
        
        // step_03:
        int sign = 1;
        long ans = 0;
        if(s[0] == '-')
            sign = -1;
        int max = INT_MAX, min = INT_MIN;
        
        i = (s[0] == '+' || s[0] == '-')? 1:0;
        
        while(i<s.size())
        {
            if(s[0] == ' ' || !isdigit(s[i]))
                break;
            ans = ans* 10 + s[i]-'0';
            
            if(sign == -1 && -1*ans < min)
                return min;
            if(sign == 1 && ans > max)
                return max;
            i++;
        }
        return (int)(sign*ans);
    }
};