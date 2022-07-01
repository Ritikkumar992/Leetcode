class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        //Approach_02: Using Adjacency Matrix:
        int n = edges.size();
        vector<int> adj[n+2];
        for(int i =0;i<n;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=1;i<=n+1;i++){
            if(adj[i].size() == n)
                return i;
        }
        return 0;
    }
};