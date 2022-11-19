int Kadane(vector<int> v){
        int currSum=0;
        int maxSum=INT_MIN;
        for(int j=0; j<v.size(); j++){
            currSum+=v[j];
            if(currSum>maxSum){
                maxSum=currSum;
            }
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
  
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        int maxSum=INT_MIN;
        for(int i=0; i<R; i++){
            vector<int> v(C);
            for(int k=i; k<R; k++){
                for(int j=0; j<C; j++){
                    v[j]+=M[k][j];
                }    
                maxSum=max(maxSum, Kadane(v));
            }
            
        }
        
        return maxSum;
    }
