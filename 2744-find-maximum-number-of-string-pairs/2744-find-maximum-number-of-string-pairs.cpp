class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0;
        unordered_map<string, int> mp;
        
        for(int i = 0;i<words.size();i++)
        {
            string word = words[i];
            reverse(word.begin(), word.end());
            
            if(mp.count(word)){
                cnt++;
                mp.erase(word);
            }
            else{
                mp[words[i]] = i;
            }
        }
        return cnt;
    }
};