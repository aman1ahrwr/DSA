vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0; col<mCols; col++){
        for(int row=0; row<nRows; row++){
            if(col%2==0){
                ans.push_back(arr[row][col]);
            }else{
                ans.push_back(arr[nRows-row-1][col]);
            }
        }
    }
    
    return ans;
}
