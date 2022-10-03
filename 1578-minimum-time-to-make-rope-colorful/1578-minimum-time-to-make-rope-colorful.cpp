class Solution {
public:
    int minCost(string s, vector<int>& neededTime) {
        char c = '*';
        int costP = 0;
        int ans = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == c){
                if(costP<neededTime[i]){
                    ans += costP;
                    costP = neededTime[i];
                }
                else{
                    ans += neededTime[i];
                }
            }
            else{
                c = s[i];
                costP = neededTime[i];
            }
        }
        return ans;
    }
};