 int minNumber(int arr[], int low, int high)
    {
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(mid==0 || arr[mid-1]>arr[mid]){
                return arr[mid];
            }
            
            if(arr[low]>arr[mid]){
                high=mid-1;
            }else if(arr[mid]>arr[high]){
                low=mid+1;
            }else{
                return arr[low];
            }
            
        }
        return -1;
        
    }
