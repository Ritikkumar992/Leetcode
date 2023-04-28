//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int fun(vector<int>&height,int ind, vector<int>&dp)
    {
        // Code here
        
        // recursive apporach to memoization: time:O(n) and space:O(n) + O(n)
        if(ind == 0){
            return 0;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }
        int left_recursion = fun(height,ind-1,dp) + abs(height[ind]-height[ind-1]);
        int right_recursion = INT_MAX;
        if(ind > 1){
            right_recursion = fun(height,ind-2,dp) + abs(height[ind] - height[ind-2]);
        }
        // return min(left_recursion, right_recursion);
        return dp[ind] = min(left_recursion, right_recursion);
    }
  public:
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n+1, -1);
        return fun(height,n-1,dp);
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends