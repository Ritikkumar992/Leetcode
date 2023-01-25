public class Solution {
    public void gameOfLife(int[][] board) {
        int m = board.length;
        int n = board[0].length;
        int[][] copy = new int[m][n];
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                copy[i][j] = board[i][j];
            }
        }
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int liveNeighbors = countLiveNeighbors(copy, i, j);
                if (copy[i][j] == 1) {
                    if (liveNeighbors < 2 || liveNeighbors > 3) {
                        board[i][j] = 0;
                    } else {
                        board[i][j] = 1;
                    }
                } else {
                    if (liveNeighbors == 3) {
                        board[i][j] = 1;
                    } else {
                        board[i][j] = 0;
                    }
                }
            }
        }
    }
    
    private int countLiveNeighbors(int[][] board, int i, int j) {
        int liveNeighbors = 0;
        for (int x = Math.max(i - 1, 0); x <= Math.min(i + 1, board.length - 1); x++) {
            for (int y = Math.max(j - 1, 0); y <= Math.min(j + 1, board[0].length - 1); y++) {
                if (!(x == i && y == j) && board[x][y] == 1) {
                    liveNeighbors++;
                }
            }
        }
        return liveNeighbors;
    }
}
