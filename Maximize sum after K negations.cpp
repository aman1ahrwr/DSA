long long int maximizeSum(long long int arr[], int n, int k)
    {
        sort(arr, arr+n);
        long long sum=0;
        long long mini=LLONG_MAX;
        for(int i=0; i<n; i++){
            if(k>0 && arr[i]<0){
                arr[i]*=-1;
                k--;
            }
            sum+=arr[i];
            mini=min(mini, arr[i]);
        }
        
        if(k%2!=0){
            sum-=2*mini;
            return sum;
        }
        
        return sum;
    }
