int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {
        int sum=0;
        int j=n-1;
        sort(arr, arr+n);
        while(j>0){
            if(arr[j]-arr[j-1]<k){
                sum+=arr[j]+arr[j-1];
                j-=2;
            }else{
                j--;
            }
        }
        return sum;
    }
