int median(vector<vector<int>> &matrix, int m, int n) {
    int low=1;
    int high=1e9;

    while(low<=high){
        int mid=low+(high-low)/2;
        int cnt=0;

        for(int i=0; i<m; i++){
            cnt+=upper_bound(matrix[i].begin(), matrix[i].end(), mid)-matrix[i].begin();
        }

        if(cnt<=((m*n)/2)){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return low;
}
// TC=O(32*N*logM)
// SC=O(1)
