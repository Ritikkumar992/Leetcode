class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(int j:jewels){
            for(int s:stones){
                if(j == s)
                    cnt++;
            }
        }
        return cnt;
    }
};