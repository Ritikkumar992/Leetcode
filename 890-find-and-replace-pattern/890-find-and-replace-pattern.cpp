class Solution {
public:
    bool isMatching(string word, string pattern)
    {
        unordered_map<char,char> mp;
        set<char> st;
        for(int i =0;i<pattern.size();i++)
        {
            if(mp.find(pattern[i]) != mp.end()){
                //pattern matching is already there:
                if(mp[pattern[i]] != word[i])
                    return false;
            }
            else{
                // new pattern matching is found:
                if(st.find(word[i]) != st.end())
                    return false;
                mp[pattern[i]] = word[i];
                st.insert(word[i]);
            }
        }
        return true;
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for(auto word:words){
            if(isMatching(word,pattern))
                res.push_back(word);
        }
        return res;
    }
};