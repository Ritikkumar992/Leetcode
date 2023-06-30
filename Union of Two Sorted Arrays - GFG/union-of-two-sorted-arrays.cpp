//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        map<int,int> mp;
        vector<int> ans;
        
        for(int i = 0;i<n;i++){
            mp[arr1[i]]++;
        }
        for(int i = 0;i<m;i++){
            mp[arr2[i]]++;
        }
        
        for(auto m:mp){
            ans.push_back(m.first);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends