class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        int cnt = 0;
        for(auto t:tasks)
        {
            mp[t]++;
            cnt = max(cnt, mp[t]);
        }
        int ans = (cnt-1)*(n+1);
        
        for(auto m:mp){
            if(m.second == cnt)
                ans++;
        }
        return max((int)tasks.size(), ans);
    }
};