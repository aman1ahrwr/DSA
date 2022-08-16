#include<set>
#include<unordered_map>


bool dfs(unordered_map<int, set<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsVisited, int node){
    visited[node]=1;
    dfsVisited[node]=1;
    for(auto i: adj[node]){
        if(!visited[i]){
            bool cycleDetected = dfs(adj, visited, dfsVisited, i);
            if(cycleDetected)
                return true;
        }else if(dfsVisited[i]){
            return false;
        }
    dfsVisited[node]=0;
        return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges){
   unordered_map<int, set<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
    
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;
    int ans;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            ans = dfs(adj, visited, dfsVisited, i);
            if(ans)
                return true;
        }
    }
    return false;
}
