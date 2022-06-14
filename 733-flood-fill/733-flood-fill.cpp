class Solution {
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int rows, int cols, int source)
    {
        if(sr < 0  || sr >= rows || sc<0 || sc>=cols)
            return;
        else if(image[sr][sc] != source)
            return;
        image[sr][sc] = color;
        
        dfs(image, sr-1, sc, color,rows, cols, source); //TOP
        dfs(image, sr+1, sc, color,rows, cols, source); //DOWN
        dfs(image, sr, sc-1, color,rows, cols, source); //LEFT
        dfs(image, sr, sc+1, color,rows, cols, source); //RIGHT
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        int rows = image.size();
        int cols = image[0].size();
        
        int source = image[sr][sc];
        dfs(image, sr,sc, color,rows,cols, source);
        return image;
    }
};