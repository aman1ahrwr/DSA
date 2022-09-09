void solve(int n, int m, vector<vector<int>> &grid, vector<int> &temp, vector<vector<int>> &ans, int x, int y){
        temp.push_back(grid[x][y]);
        
        if(x+1<n){
            solve(n, m, grid, temp, ans, x+1, y);
        }
        if(y+1<m){
            solve(n, m, grid, temp, ans, x, y+1);
        }
        if(x==n-1 && y==m-1){
            ans.push_back(temp);
        }
        
        temp.pop_back();
    } 
    
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(n, m, grid, temp, ans, 0, 0);
        return ans;
    }
