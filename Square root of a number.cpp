long long int floorSqrt(long long int x) 
{
    if(x==1) return 1;
    long long int low=1, high=x/2;
    long long int ans;
    while(low<=high){
        long long int mid = low+(high-low)/2;
        long long int sqr = mid*mid;
        if(x>sqr){
            ans=mid;
            low=mid+1;
        }else if(x<sqr){
            high=mid-1;
        }else{
            return mid;
        }
    }
    return ans;
}
