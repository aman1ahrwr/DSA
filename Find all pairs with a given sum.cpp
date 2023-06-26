vector<pair<int,int>> allPairs(int A[], int B[], int n, int m, int X)
    {
        unordered_map<int, int> mpp;
        vector<pair<int, int>> ans;
        
        for(int i=0; i<n; i++){
            mpp[A[i]]=1;
        }
        
        for(int i=0; i<m; i++){
            if(mpp.find(X-B[i])!=mpp.end()){
                ans.push_back({X-B[i], B[i]});
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }

// TC=O(N*logN)
// SC=O(N)
