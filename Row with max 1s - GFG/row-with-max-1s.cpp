//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int rowWithMax1s(vector<vector<int> >& arr, int n, int m) {
        int maxOnesRow = -1;  // Initialize the index of the row with max 1's
        int maxOnesCount = 0; // Initialize the count of max 1's to 0

        // Iterate through each row
        for (int i = 0; i < n; i++) {
            int onesCount = 0; // Count of 1's in the current row

            // Iterate through each column in the current row
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1)
                    onesCount++;
            }

            // Update maxOnesRow and maxOnesCount if the current row has more 1's
            if (onesCount > maxOnesCount) {
                maxOnesRow = i;
                maxOnesCount = onesCount;
            }

            // If the current row has all 1's, return the row index immediately
            if (onesCount == m)
                return i;
        }

        return maxOnesRow; // Return the index of the row with max 1's
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends