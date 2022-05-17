class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Brute force: Time : O(n*n)
        int n = matrix.size();
        vector<vector<int>> dummy(n,vector<int>(n,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                dummy[j][n-i-1] = matrix[i][j];
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                 matrix[i][j] = dummy[i][j];
            }
        }
    }
};