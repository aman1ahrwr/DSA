int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> map;
        int maxi = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+=A[i];
            if(sum==0){
                maxi=i+1;
            }else{
                if(map.find(sum)!=map.end()){
                    maxi=max(maxi,i-map[sum]);
                }else{
                    map[sum]=i;
                }
            }
        }
        return maxi;
    }
