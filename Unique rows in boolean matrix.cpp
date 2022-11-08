vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    set<vector<int>> set;
    vector<vector<int>> res;
    vector<int> temp;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            temp.push_back(M[i][j]);
        }
        int size = set.size();
        set.insert(temp);
        if(size+1==set.size()){
            res.push_back(temp);
        }
        temp.clear();
    }

    
    return res;
}
