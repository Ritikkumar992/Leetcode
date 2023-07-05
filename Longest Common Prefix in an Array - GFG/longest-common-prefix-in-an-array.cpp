//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int N)
    {
        sort(strs, strs+N);
        
        string s1 = strs[0];
        string s2 = strs[N-1];
        
        int n = s1.size(), m = s2.size();
        string ans = "";
        int p1 = 0, p2 = 0;
        while(p1 < n && p2 < m)
        {
            if(s1[p1] == s2[p2])
                ans.push_back(s1[p1]);
            else
                break;
            p1++;
            p2++;
        }
        if(ans.size() == 0){
            return "-1";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends