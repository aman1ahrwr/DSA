int count(vector<int>& arr, int n, int x) {
	int first=-1;
	int last=-1;

	int low=0;
	int high=n-1;

	while(low<=high){
		int mid=low+(high-low)/2;

		if(arr[mid]==x){
			first=mid;
			high=mid-1;
		}else if(arr[mid]<x){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}

	if(first==-1) return 0;

	low=0, high=n-1;

	while(low<=high){
		int mid=low+(high-low)/2;

		if(arr[mid]==x){
			last=mid;
			low=mid+1;
		}else if(arr[mid]<x){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}

	return last-first+1;
}

// TC=O(logN)
// SC=O(1)
