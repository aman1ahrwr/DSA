int findDays(vector<int> arr, int k, int mid){
	int ans=0;
	int cnt=0;
	for(int i=0; i<arr.size(); i++){
		if(arr[i]<=mid && cnt<k){
			cnt++;
		}else{
			cnt=0;
		}

		if(cnt==k){
			ans++;
			cnt=0;
		}
	}

	return ans;
}

int roseGarden(vector<int> arr, int k, int m)
{
	long long val = (long long)m*(long long) k;
	if(val>arr.size()) return -1;

	int maxi=INT_MIN;
	int mini=INT_MAX;
	for(auto i: arr){
		if(i>maxi){
			maxi=i;
		}

		if(i<mini){
			mini=i;
		}
	}

	int low=mini;
	int high=maxi;

	int ans=-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		int val=findDays(arr, k, mid);

		if(val>=m){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}

	return ans;
}

// TC=O(N)
// SC=O(1)
