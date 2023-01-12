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
        int temp = n;
        int ans = 0;
        while(temp != 0)
        {
            int digit = temp%10;
            ans += digit*digit*digit;
            temp /= 10;
        }
        String s = "";
        if(ans == n){
            s = "Yes";
        }
        else{
            s = "No";
        }
        return s;
    }
}