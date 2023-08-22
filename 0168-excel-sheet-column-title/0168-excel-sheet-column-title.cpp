class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(columnNumber > 0)
        {
            char c = 'A' + (columnNumber-1)%26;
            res = c + res;
            columnNumber = (columnNumber-1)/26;
        }
        return res;
    }
};