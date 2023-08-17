#include<bits/stdc++.h>
long double minimiseMaxDistance(vector<int> &arr, int k){
	int n=arr.size();
	vector<int> placed(n-1, 0);

	for(int i=1; i<=k; i++){
		int maxInd=-1; 
		long double maxDist=INT_MIN;
		for(int i=0; i<n-1; i++){
			long double diff=arr[i+1]-arr[i];
			long double sectionLen=diff/(placed[i]+1);
			if(sectionLen>maxDist){
				maxDist=sectionLen;
				maxInd=i;
			}
		}
		placed[maxInd]++;
	}

	long double ans=-1;
	for(int i=0; i<n-1; i++){
		long double dist=(double)(arr[i+1]-arr[i])/(double)(placed[i]+1);
		if(dist>ans){
			ans=dist;
		}
	}

	return ans;
}

// TC=O(K*N)
// SC=O(N)
