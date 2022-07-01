class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int ans1 = edges[0][0];
        int ans2 = edges[0][1];
        
        for(int i = 1;i<n;i++){
            if(edges[i][0] == ans1 || edges[i][1] == ans1){
                return ans1;
            }
            else if(edges[i][0] == ans2 || edges[i][1] == ans2){
                return ans2;
            }
        }
        return -1;
    }
};