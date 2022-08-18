class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int  n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> dummy1(n,-1);
        vector<int> dummy2(m,-1);
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == 0){
                    dummy1[i] = 0;
                    dummy2[j] = 0;
                }
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(dummy1[i] == 0 || dummy2[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
};