int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int ans=-1;
    int prevCnt=-1;
    for(int i=0; i<n; i++){
        int low=0;
        int high=m-1;
        int ind=-1;
        int cnt=0;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(matrix[i][mid]==0){
                low=mid+1;
            }else{
                cnt=m-mid;
                ind=mid;
                high=mid-1;
            }
        }

        if(cnt>prevCnt){
            prevCnt=cnt;
            ans=i;
        }

    }

    return ans;
}
// TC=O(N*logM)
// SC=O(1)
