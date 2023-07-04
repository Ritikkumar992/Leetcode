//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int Divisor(vector<int>&arr, int threshold, int value)
    {
        int ans = 0;
        for(int i =0;i<arr.size();i++)
        {
            ans += ceil(double(arr[i]) / (double)(value));
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int K) {

        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = -1;
        
        // linear search:
        // for(int i = 1;i<= high;i++)
        // {
        //     if(Divisor(nums,threshold, i) <= threshold){
        //         return i;
        //     }
        // }
        // return -1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(Divisor(nums,K, mid) <= K){
                ans = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends