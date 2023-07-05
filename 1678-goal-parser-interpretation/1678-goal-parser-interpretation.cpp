class Solution {
public:
    string interpret(string command) {
        unordered_map<string, string> mp = 
        {
            {"(al)", "al"},
            {"()", "o"},
            {"G", "G"},
        };
        string temp = "", ans = "";
        for(char c:command)
        {
            temp += c;
            if(mp.find(temp) != mp.end()){
                ans += mp[temp];
                temp = "";
            }
        }
        return ans;
    }
};