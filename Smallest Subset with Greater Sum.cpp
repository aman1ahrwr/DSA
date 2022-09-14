int minSubset(vector<int> &arr,int n){
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        
        sort(arr.rbegin(), arr.rend());
        
        int count=0;
        long long currSum=0;
        for(int i=0; i<n; i++){
            currSum+=arr[i];
            sum-=arr[i];
            count++;
            if(currSum>sum){
                return i+1;
            }
        }
    }
