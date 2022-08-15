void makeAdjList(vector<pair<int, int>> &edges, unordered_map<int, set<int>> &adj){
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
}

void bfs(unordered_map<int, set<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans, int i){
    queue<int> q;
    q.push(i);
    visited[i]=1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i: adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    vector<int> ans;
    unordered_map<int, set<int>> adj;
    unordered_map<int, bool> visited;
    makeAdjList(edges, adj);
    
    for(int i=0; i<vertex; i++){
        if(!visited[i]){
            bfs(adj, visited, ans, i);
        }
    }
    return ans;
}
