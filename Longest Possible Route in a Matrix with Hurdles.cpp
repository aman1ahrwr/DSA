void solve(vector<vector<int>> matrix, int r, int c, int xd, int yd, int temp, int &ans, int &flag){
        if(r<0 || r>=matrix.size() || c<0 || c>=matrix[0].size() || matrix[r][c]==0){
            return;
        }
        if(r==xd && c==yd){
            flag=1;
            ans=max(ans, temp);
            return;
        }else{
            matrix[r][c]=0;
            solve(matrix, r+1, c, xd, yd, temp+1, ans, flag);
            solve(matrix, r-1, c, xd, yd, temp+1, ans, flag);
            solve(matrix, r, c+1, xd, yd, temp+1, ans, flag);
            solve(matrix, r, c-1, xd, yd, temp+1, ans, flag);
            matrix[r][c]=1;
        }
    }

    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int temp=0;
        int ans=-1;
        int flag=0;
        solve(matrix, xs, ys, xd, yd, temp, ans, flag);
        if(flag==0) return -1;
        return ans;
    }
