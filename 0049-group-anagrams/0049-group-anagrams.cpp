class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //using map+sorting:
        unordered_map<string,vector<string>> mp;
        for(auto s:strs)
        {
            string t = s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    } 
};