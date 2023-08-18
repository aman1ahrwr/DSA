bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int start=0;
        int end=row*col-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int midEle=matrix[mid/col][mid%col];

            if(midEle==target){
                return true;
            }else if(midEle<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return false;
    }
// TC=O(log(N*M))
// SC=O(1)

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int i=0;
    int j=mat[0].size()-1;
    while(i<mat.size() && j>=0){
        if(mat[i][j]==target){
            return true;
        }else if(mat[i][j]<target){
            i++;
        }else{
            j--;
        }
    }

    return false;
}
// TC=O(N+M)
// SC=O(1)
