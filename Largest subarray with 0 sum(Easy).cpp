int maxLen(vector<int>&A, int n)
    {   
        int sum=0;
        unordered_map<int, int> map;
        int maxSubArray=0;
        map[0]=-1;
        for(int i=0; i<n; i++){
            sum+=A[i];
            if(map.find(sum)!=map.end()){
                maxSubArray = max(i-map[sum], maxSubArray);
            }else{
                map[sum]=i;
            }
        }
        return maxSubArray;
    }
