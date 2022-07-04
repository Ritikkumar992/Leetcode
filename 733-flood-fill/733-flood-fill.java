class Solution {
    public void checkfloodfill(int [][]image,int x,int y, int color, int m,int n,int source){
        if(x<0 || x>=m || y<0 || y>=n)
            return;
        else if(image[x][y] != source)
            return;
        image[x][y] = color;
        
        checkfloodfill(image,x+1,y,color,m,n,source);// down;
        checkfloodfill(image,x-1,y,color,m,n,source);// up;
        checkfloodfill(image,x,y+1,color,m,n,source);// left
        checkfloodfill(image,x,y-1,color,m,n,source);// right
    }
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        int m = image.length;
        int n = image[0].length;
        
        int source = image[sr][sc];
        checkfloodfill(image,sr,sc,color,m,n,source);
        return image;
    }
}