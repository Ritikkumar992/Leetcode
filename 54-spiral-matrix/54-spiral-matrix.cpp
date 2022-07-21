class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int top = 0, bottom = m-1, left = 0, right = n-1;
        int dir = 0;
        vector<int> ans;
        while(top <= bottom && left <= right)
        {
            if(dir == 0){// left -> right;
                for(int i= left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir == 1){// top -> bottom:
                for(int i = top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir == 2){ // right <- left;
                for(int i = right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            else if(dir == 3){ // down -> top:
                for(int i = bottom;i>= top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};