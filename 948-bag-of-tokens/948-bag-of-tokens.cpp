class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int l = 0, r = tokens.size()-1;
        int cur_score = 0, max_score = 0;
        while(l<=r)
        {
            if(tokens[l] <= power){
                power -= tokens[l];
                cur_score++;
                max_score = max(max_score,cur_score);
                l++;
            }
            else if(cur_score >= 1){
                power += tokens[r];
                cur_score--;
                max_score = max(max_score,cur_score);
                r--;
            }
            else{
                break;
            }
        }
        return max_score;
    }
};