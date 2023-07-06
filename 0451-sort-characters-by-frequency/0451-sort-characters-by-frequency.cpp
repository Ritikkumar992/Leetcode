class Solution {
public:
    string frequencySort(string s) {
        
        vector<pair<int, char>> hash('z'+1, {0,0});
        for(char c:s){
            hash[c] = {hash[c].first+1, c};
        }
        sort(hash.begin(), hash.end());
        
        string res = "";
        for(auto h:hash)
        {
            res = string(h.first, h.second)+res;
        }
        return res;
    }
};