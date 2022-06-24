class Solution {
    public void setZeroes(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        
        Set<Integer> dummy1 = new HashSet<Integer>();
        Set<Integer> dummy2 = new HashSet<Integer>();
        
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(matrix[i][j] == 0){
                    dummy1.add(i);
                    dummy2.add(j);
                }
            }
        }
        for(int i = 0;i<row;i++){
            for(int j =0;j<col;j++){
                if(dummy1.contains(i)|| dummy2.contains(j))
                    matrix[i][j] = 0;
            }
        }
    }
}