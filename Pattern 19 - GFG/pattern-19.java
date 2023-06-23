//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Main {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            Solution obj = new Solution();
            obj.printTriangle(n);
        }
    }
}
// } Driver Code Ends


class Solution {

    void printTriangle(int N) {
      // for the upper half of the pattern.
        
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              System.out.print("*");
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              System.out.print(" ");
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              System.out.print("*");
          }
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          System.out.println();
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              System.out.print("*");
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              System.out.print(" ");
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              System.out.print("*");
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          System.out.println();
      }
    }
}