//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int mx = *max_element(arr,arr+n);
	    int second_mx = -1;
	    for(int i = 0;i<n;i++){
	        if(arr[i] < mx && arr[i] > second_mx){
	            second_mx = arr[i];
	        }
	    }
	    return second_mx;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends