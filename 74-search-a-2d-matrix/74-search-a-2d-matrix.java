class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        
        if(matrix.length == 0)
            return false;
        int i = 0,j = m*n-1;
        
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(matrix[mid/m][mid%m] == target)
                return true;
            else if(matrix[mid/m][mid%m] > target)
                j = mid-1;
            else
                i = mid+1;
        }
        return false;
    }
}