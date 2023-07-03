//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int nums[], int n)
    {
        int low = 0;
        int high = n-1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Check if mid is the start of a pair
            if (nums[mid] == nums[mid ^ 1])
                low = mid + 1;
            else
                high = mid;
        }

        return nums[low];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends