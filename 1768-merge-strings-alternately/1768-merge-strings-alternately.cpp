class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        string ans = "";
        int i = 0,j = 0;
        while(i<n || j<m){
            if(i<n){
                ans.push_back(word1[i++]);
            }
            if(j<m){
                ans.push_back(word2[j++]);
            }
        }
        return ans;
    }
};