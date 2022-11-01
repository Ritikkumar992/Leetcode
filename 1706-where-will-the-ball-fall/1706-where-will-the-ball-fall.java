class Solution {
    public int[] findBall(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        
        int [] ans = new int[m];
        for(int i = 0;i<m;i++)
        {
            int cpos = i;
            int npos = -1;
            for(int j = 0;j<n;j++){
                npos = cpos + grid[j][cpos];
                
                if(npos <0 || npos >= m || grid[j][cpos] != grid[j][npos]){
                    cpos = -1;
                    break;
                }
                cpos = npos;
            }
            ans[i] = cpos;
        }
        return ans;
    }
}