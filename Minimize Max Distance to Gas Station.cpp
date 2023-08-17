// Better Solution
#include<bits/stdc++.h>
long double minimiseMaxDistance(vector<int> &arr, int k){
	priority_queue<pair<long double, int>, vector<pair<long double, int>>> maxHeap;
	int n=arr.size();
	vector<int> placed(n-1, 0);
	
	for(int i=0; i<n-1; i++){
		maxHeap.push({(arr[i+1]-arr[i]), i});
	}

	for(int i=1; i<=k; i++){
		auto tp=maxHeap.top();
		maxHeap.pop();
		int ind=tp.second;
		placed[ind]++;
		long double newDist=(arr[ind+1]-arr[ind])/(long double)(placed[ind]+1);
		maxHeap.push({newDist, ind});
	}

	return maxHeap.top().first;
}
// TC=O(N*logN+K*logK)
// SC=O(N-1)

// Bruteforce Solution
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
// SC=O(N-1)
