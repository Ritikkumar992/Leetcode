//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
         // Linear Search:
        // long long int ans = 0;
        // for(long long int i= 1;i<=x;i++)
        // {
        //     if(i*i <= x * 1ll){
        //         ans = i;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // return ans;
        
        // long long int ans = sqrt(x);
        // return ans;
        
        // Binary Search:
        long long int ans = 0;
        long long int low = 1, high = x;
        
        while(low <= high)
        {
            long long int mid = low + (high-low)/2;
            if(mid *mid <= x){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends