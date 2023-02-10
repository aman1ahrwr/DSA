// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ans=arr[0];
	    long long maxi=arr[0];
	    long long mini=arr[0];
	    
	    for(int i=1; i<n; i++){
	        if(arr[i]<0){
	            swap(maxi, mini);
	        }
	        
	        maxi=max((long long)arr[i], maxi*arr[i]);
	        mini=min((long long)arr[i], mini*arr[i]);
	        ans=max(ans, maxi);
	    }
	    
	    return ans;
	}
