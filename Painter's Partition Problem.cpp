bool isPossible(vector<int> &boards, int n, int k, int mid){
    int painter=1;
    int sum=0;
    for(int i=0; i<n; i++){
        if(sum+boards[i]<=mid){
            sum+=boards[i];
        }else{
            painter++;
            if(painter>k || boards[i]>mid){
                return 0;
            }
            sum=boards[i];
        }
    }
    
    return 1;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    int ans=-1;
    int low=0;
    int high=0;
    for(int i=0; i<n; i++){
        high+=boards[i];
    }
    
    while(low<=high){
        int mid=low+(high-low)/2;
        
        if(isPossible(boards, n, k, mid)){
            high=mid-1;
            ans=mid;
        }else{
            low=mid+1;
        }
    }
    
    return ans;
}
