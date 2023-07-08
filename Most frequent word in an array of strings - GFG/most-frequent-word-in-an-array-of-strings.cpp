//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string,int> mp;
        
        int mx = 0;
        
        for(int i = 0;i<n;i++)
        {
            mp[arr[i]]++;
            mx = max(mx, mp[arr[i]]);
        }
        
        string res = "";
        for(int i = 0;i<n;i++)
        {
            if(mp[arr[i]] == mx){
                res = arr[i];
                mp[arr[i]]--;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends