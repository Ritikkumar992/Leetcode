//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    int findFloor(vector<long long> v, long long n, long long x){
        long long mx  = -1;
        long long low = 0, high = n-1;
        while(low <= high)
        {
            long long mid = low + (high-low)/2;
            if(v[mid] <= x){
                mx = max(mx, v[mid]);
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(mx != -1){
            for(int i =0;i<n;i++){
                if(v[i] == mx){
                    return i;
                }
            }
            return -1;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends