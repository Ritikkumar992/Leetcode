//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr, arr+n);
    int low = 0, high = n-1, floors = -1, ceils = -1;
    
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        
        if(arr[mid] == x){
            return {arr[mid],arr[mid]};    
        }
        else if(arr[mid] > x){
            high = mid-1;
            ceils = arr[mid];
        }
        else{
            low = mid+1;
            floors = arr[mid];
        }
    }
    return {floors,ceils};
    
}