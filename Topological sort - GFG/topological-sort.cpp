// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    void solve(int node,vector<int>&visited, vector<int>adj[],stack<int>&st)
    {
        visited[node] = 1;
        for(auto it:adj[node]){
            if(visited[it] == 0){
                solve(it,visited,adj,st);
            }
        }
        st.push(node);
    }
	public:
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    stack<int> st;
	    vector<int>ans;
	   vector<int>visited(n+1,0);
	   for(int i = 0;i<n;i++){
	       if(visited[i] == 0){
	           solve(i,visited,adj,st);
	       }
	   }
	   while(!st.empty()){
	       int top = st.top();
	       st.pop();
	       ans.push_back(top);
	   }
	   return ans;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends