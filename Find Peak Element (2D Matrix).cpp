int maxMid(vector<vector<int>> &g, int mid){
    int ansRow=0;
    int maxVal=g[0][mid];
    
    for(int i=1; i<g.size(); i++){
        if(g[i][mid]>maxVal){
            ansRow=i;
            maxVal=g[i][mid];
        }
    }

    return ansRow;
}

vector<int> findPeakGrid(vector<vector<int>> &g){
    int n=g.size();
    int m=g[0].size();
    
    int low=0;
    int high=m-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=maxMid(g, mid);
        
        bool left=true;
        bool right=true;
        if(mid>0){
            if(g[row][mid]<g[row][mid-1]){
                left=false;
            }
        }

        if(mid<m-1){
            if(g[row][mid]<g[row][mid+1]){
                right=false;
            }
        }

        if(left && right){
            return {row, mid};
        }else if(left==false){
            high=mid-1;
        }else{
            low=mid+1;
        }
        
    }

    return {-1, -1};
}
// TC=O(N*logM)
// SC=O(1)
