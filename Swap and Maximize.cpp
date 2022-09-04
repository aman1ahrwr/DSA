long long int maxSum(int arr[], int n)
{
    sort(arr, arr+n);
    int i=0;
    int j=n-1;
    int sum=0;
    while(i<n && j>=0){
        sum+=abs(arr[i]-arr[j]);
        i++; j--;
    }
    return sum;
}
