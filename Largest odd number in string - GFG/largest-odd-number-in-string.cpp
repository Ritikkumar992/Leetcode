//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string num) {
        
        int n = num.size();
        int i = n-1;
        string ans = "";
        while(i>=0)
        {
            if(num[i]%2 != 0){
                ans += num[i];
            }
            if(num[i]%2 == 0 && ans[0]%2 != 0){
                ans += num[i];
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends