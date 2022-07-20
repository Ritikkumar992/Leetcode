class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt = 0;
        unordered_map<char, list<string>>mp;
        for(auto& s : words)
            mp[s[0]].push_back(s);
        
        for(auto &c:s){
            if(mp.count(c)){
                int n = mp[c].size();
                while(n--){
                    string word = mp[c].front();
                    mp[c].pop_front();
                    if(word.size() == 1)
                        cnt++;
                    else
                        mp[word[1]].push_back(word.substr(1));
                }
            }
        }
        return cnt;
    }
};