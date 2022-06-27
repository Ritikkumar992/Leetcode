class Solution {
    public:
    bool isSafe(int row, int col, vector<string>board,int n){
        //check upper diagonal;
        int duprow = row,dupcol = col;
        while(row>=0 && col>=0){
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        col = dupcol;
        row = duprow;
        // check for left col:
        while(col>=0){
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        col = dupcol;
        row = duprow;
        // check for lower diagonal:
        while(row<n && col>=0){
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        // if none of the condition satiesfies 
        return true;
    }
    public:
    void solve(int col, vector<string>&board,vector<vector<string>>&ans,int n){
        //base case:
        if(n == col){
            ans.push_back(board);
            return;
        }
        // for each column we are doing our main logic:
        for(int row = 0;row<n;row++){
            if(isSafe(row,col,board,n))
            {
                board[row][col] = 'Q';
                solve(col+1,board,ans,n);
                board[row][col] = '.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};