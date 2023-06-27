//{ Driver Code Starts
//Initial Template for Java
import java.util.*;
import java.io.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.armstrongNumber(n));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution {
    static String armstrongNumber(int n){
        // code here
        int temp = n, ans = 0;
        while(temp != 0)
        {
            int digit = temp%10;
            int cube = digit*digit*digit;
            ans += cube;
            
            temp /= 10;
        }
        if(ans == n){
            return "Yes";
        }
        else{
            return "No";
        }
    }
}