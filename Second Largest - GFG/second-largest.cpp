//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int print2largest(int arr[], int n) {
	   // int mx = *max_element(arr,arr+n);
	   // int second_mx = -1;
	   // for(int i = 0;i<n;i++){
	   //     if(arr[i] < mx && arr[i] > second_mx){
	   //         second_mx = arr[i];
	   //     }
	   // }
	   // return second_mx;
	   
	   //sort(arr, arr+n);
	   //for(int i = n-1;i>0;i--)
	   //{
	   //    if(arr[i] != arr[i-1]){
	   //        return arr[i-1];
	   //    }
	   //}
	   //return -1;
	   
	   int large = -1;
	   int second_large = -1;
	   for(int i = 0;i<n;i++)
	   {
	       if(arr[i] > large){
	           second_large = large;
	           large = arr[i];
	       }
	       else if(arr[i] > second_large && arr[i] != large){
	           second_large = arr[i];
	       }
	   }
	   return second_large;
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