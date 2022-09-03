vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> aggregateArray;
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                aggregateArray.push_back(Mat[i][j]);
            }
        }
        
        sort(aggregateArray.begin(), aggregateArray.end());
        
        int c=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                Mat[i][j]=aggregateArray[c++];
            }
        }
        
        return Mat;
    }
