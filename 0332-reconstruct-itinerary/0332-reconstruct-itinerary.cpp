// comparator for sorting tickets based on destination
bool comparator(const vector<string>&a,const vector<string>&b){
    return a[1]<b[1];        
}

class Solution {
public:
    vector<string>result;
    void dfs(string node, map<string,queue<string>>&graph)
    {
        // process node's edges 
        if(graph.count(node))
        {
            // If node has any edge call DFS with the edge destination node
            // also remove the edge as we will not visit the edge again (Euler walk)
            while(!graph[node].empty())
            {
                string child = graph[node].front();
                graph[node].pop();
                dfs(child,graph);
            }  
        }
        // push node in to result when all its edges are processed
        result.push_back(node);        
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        // sort tickets based on destination to get lexical smaller desitantion edge first
        sort(tickets.begin(),tickets.end(),comparator);
        
        // graph adjacency list
        map<string,queue<string>>graph;

        // populate graph adjacency list
        for(int i=0;i<tickets.size();i++)      
            graph[tickets[i][0]].push(tickets[i][1]);
        
        // run DFS starting from JFK
        dfs("JFK",graph);
        
        // reverse result vector to get itenary list order
        reverse(result.begin(),result.end());
        
        return result;
    }
};