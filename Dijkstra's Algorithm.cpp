int minDistance(vector <int> &dist, bool sptSet[],int V)
    {
        //initializing minimum value.
        int min = INT_MAX, min_index;
        
        for (int v = 0; v < V; v++)
            if (sptSet[v] == false && dist[v] <= min)
                min = dist[v], min_index = v;
        
        return min_index;
    }
	
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        //creating Adjacency matrix from Adjacency list.
        vector<vector<int> > adj_mat(V, vector<int>(V, 0));
        for(int i=0; i<V; i++)
            for(int j=0; j<adj[i].size(); j++)
                adj_mat[i][adj[i][j][0]] = adj[i][j][1];
        
        //dist[] is output list. dist[i] will hold the 
        //shortest distance from source to i.
        vector <int> dist(V);
        
        //sptSet[i] will true if vertex i is included in shortest
        //path tree or shortest distance from src to i is finalized.
        bool sptSet[V];
        
        //initializing all distances as INFINITE and stpSet[] as false.
        for (int i = 0; i < V; i++)
            dist[i] = INT_MAX, sptSet[i] = false;
        
        //distance of source vertex from itself is always 0.
        dist[S] = 0;
        
        //iterating over all vertices.
        for (int count = 0; count < V-1; count++)
        {
            //picking the minimum distance vertex from the set of vertices
            //not yet processed and marking the picked vertex as processed.
            int u = minDistance(dist, sptSet,V);
            sptSet[u] = true;
            
            //updating dist[] value of adjacent vertices of the picked vertex.
            for (int v = 0; v < V; v++)
            {
                //updating dist[v] only if it's not in sptSet, there is an
                //edge from u to v, and total weight of path from source to
                //v through u is smaller than current value of dist[v].
                if (!sptSet[v] && adj_mat[u][v] && dist[u] != INT_MAX 
                                            && dist[u]+adj_mat[u][v] < dist[v])
                    dist[v] = dist[u] + adj_mat[u][v];
            }
        }
        //returning the list.
        return dist;
    }
