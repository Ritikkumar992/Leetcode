class Solution {
    public int[][] generateMatrix(int n) {
        //Declaration:
        int [][] matrix = new int[n][n];
        
        //edge case:
        if(n == 0){
            return matrix;
        }
        //normal case:
        int rowstart = 0;
        int rowend = n-1;
        int colstart = 0;
        int colend = n-1;
        int num = 1; // change:
        
        //logic:
        
        while(rowstart <= rowend && colstart <= colend)
        {
            //case1: moves from top left to top right corner:
            //row remains constant , col chnages:
            for(int i = colstart; i<=colend;i++){
                matrix[rowstart][i] = num;
                num++; //  change:
            }
            rowstart++;
            
            //case2: moves from top right to bottom right corner:
            //col remains constant  , row chnages:
            for(int i = rowstart; i <= rowend;i++){
                matrix[i][colend] = num;
                num++; //  change:
            }
            colend--;
            
            //case3: moves from bottom right to bottom left corner:
            //row remains constant  , col chnages:
            for(int i = colend; i >= colstart; i--){
                if(rowstart <= rowend){
                    matrix[rowend][i] = num++; //change
                }
            }
            rowend--;
            
            //case4: moves from bottom righ6 corner to bottom left corner;
            for (int i = rowend; i >= rowstart; i --) {
                if (colstart <= colend)
                    matrix[i][colstart] = num ++; //change
            }
            colstart ++;
        }
        return matrix;
    }
}