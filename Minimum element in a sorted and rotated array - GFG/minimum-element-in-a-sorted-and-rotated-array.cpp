//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int nums[], int n){
        //complete the function here
        int low = 0, high = n-1;
        
        if(n == 1)
            return nums[0];
        
        //if the last ele is greater than the first ele then there is no rotation;
        //hence smallest elem is the first element:
        if(nums[high] > nums[0])
            return nums[0];
        //binary search logic:
        while(high >= low)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] > nums[mid+1])
                return nums[mid+1];
            if(nums[mid-1] > nums[mid])
                return nums[mid];
            
            //if the mid ele value is greater than the 0th ele this means the least value is still
            // somewhere to the right as we still dealing with the elm greater than 
            if(nums[mid] > nums[0]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return INT_MAX;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends