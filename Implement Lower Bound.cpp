int lowerBound(vector<int> arr, int n, int x) {
	int ans=n;
	int low=0;
	int high=n-1;

	while(low<=high){
		int mid=(high+low)/2;

		if(arr[mid]>=x){
			ans=min(ans, mid);
			high=mid-1;
		}else{
			low=mid+1;
		}
	}

	return ans;
}

// TC=O(logN)
// SC=O(1)
