#include<stack>
#include<list>
#include<unordered_map>


void dfs(unordered_map<int, list<int>> &adj, vector<bool> &visited, stack<int> &st, int i){
    visited[i]=1;
    for(auto neighbour: adj[i]){
        if(!visited[i]){
            dfs(adj, visited, st,neighbour);
        }
    }
            st.push(i);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int, list<int>> adj;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
    }
    
    vector<bool> visited(v);
    stack<int> st;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            dfs(adj, visited, st, i);
        }
    }
    
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
