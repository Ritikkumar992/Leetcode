class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // linear search: time :O(N^2) and Space:(1)
        int cnt = 0;
        int n  = grid.size();
        int m = grid[0].size();
        for(int i= 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]<0)
                    cnt++;
            }
        }
        return cnt;
    }
};