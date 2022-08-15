void dfs(unordered_map<int, set<int>> &adj, unordered_map<int, bool> &visited, int node, vector<int> &temp){
    temp.push_back(node);
    visited[node]=1;
    
    for(auto i : adj[node]){
        if(!visited[i]){
            dfs(adj, visited, i, temp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
//     Making adjacency matrix 
    unordered_map<int, set<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
    
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                vector<int> temp;
                dfs(adj, visited, i, temp);
                ans.push_back(temp);
            }
        }
    
    return ans;
    
}
