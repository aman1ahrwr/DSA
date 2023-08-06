#include<bits/stdc++.h>

int findSum(vector<int> arr, int mid, int limit){
	int ans=0;

	for(int i=0; i<arr.size(); i++){
		ans+=ceil((double)arr[i]/(double)mid);
		if(ans>limit){
			return -1;
		}
	}

	if(ans<=limit)
		return 1;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int maxi=INT_MIN;
	for(auto i: arr){
		if(i>maxi){
			maxi=i;
		}
	}

	int low=1;
	int high=maxi;

	int ans=-1;

	while(low<=high){
		int mid=low+(high-low)/2;

		if(findSum(arr, mid, limit)==1){
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}

	return ans;
}

// TC=O(N)*O(max(element)) ~ O(N)
// SC=O(1)
