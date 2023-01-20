class Solution {
    public void setZeroes(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        int dummy1[] = new int[n];
        int dummy2[] = new int[m];
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == 0){
                    dummy1[i] = -1;
                    dummy2[j] = -1;
                }
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(dummy1[i] == -1 || dummy2[j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
}