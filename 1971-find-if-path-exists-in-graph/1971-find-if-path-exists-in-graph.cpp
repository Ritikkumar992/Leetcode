class Solution {
public:
    bool check(int source,int destination, vector<int>&visited,vector<vector<int>>&graph){
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        while(!q.empty())
        {
            int top = q.front();
            q.pop(); 
            
            if(top == destination)
                return true;
            for(auto it:graph[top]){
                if(!visited[it]){
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        for(int i = 0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n,0);
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                if(check(source,destination,visited,graph)== true)
                    return true;
            }
        }
        return false;
    }
};