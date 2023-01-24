class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        List<Integer> ans = new ArrayList<>();
        
        int top = 0, bottom = m-1;
        int left = 0, right = n-1;
        int dir = 0;
        
        while(top <= bottom && left <= right)
        {
            if(dir == 0){ // left---> right:
                for(int i = left;i<=right;i++){
                    ans.add(matrix[top][i]);
                }
                top++;
            }
            else if(dir == 1){// top -> bottom:
                for(int i = top;i<=bottom;i++){
                    ans.add(matrix[i][right]);
                }
                right--;
            }
            else if(dir == 2){ // right <- left;
                for(int i = right;i>=left;i--){
                    ans.add(matrix[bottom][i]);
                }
                bottom--;
            }
            else if(dir == 3){ // down -> top:
                for(int i = bottom;i>= top;i--){
                    ans.add(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
}