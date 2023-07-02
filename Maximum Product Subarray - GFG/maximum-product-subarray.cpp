//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution {
public:
    // Function to find maximum product subarray
    long long maxProduct(vector<int>& arr, int n) {
        if (n == 0) return 0;

        long long max_product = arr[0];
        long long min_product = arr[0];
        long long max_product_so_far = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < 0)
                swap(max_product, min_product);

            max_product = max(static_cast<long long>(arr[i]), max_product * arr[i]);
            min_product = min(static_cast<long long>(arr[i]), min_product * arr[i]);

            max_product_so_far = max(max_product_so_far, max_product);
        }

        return max_product_so_far;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends