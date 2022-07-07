	int findMaximum(int arr[], int n) {
	    int low=0, high=n-1;
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        
	        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
	         return arr[mid];
	        }else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
	            low=mid+1;
	        }else{
	            high=mid-1;
	        }
	    }
	    return arr[n-1];
	}
