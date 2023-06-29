//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    
	    // edge case:
	    if(n == 0)return;
	    k = k%n;
	    if(k>n) return;
	    
	    int temp[k];
	    
	    // step_01: copy the first k elem in temp array:
	    for(int i =0;i<k;i++){
	        temp[i] = arr[i];
	    }
	    
	    // step_02: shift n-k elements from the last by k position to the left:
	    for(int i = 0;i<n-k;i++){
	        arr[i] = arr[i+k];
	    }
	    
	    // step_03: copy the ele into arr from temp:
	    for(int i = n-k;i<n;i++){
	        arr[i] = temp[i-n+k];
	    }
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
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends