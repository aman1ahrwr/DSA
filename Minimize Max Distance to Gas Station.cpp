// Best Solution
#include<bits/stdc++.h>
int countGasStations(vector<int> arr, long double mid){
	int ans=0;
	for(int i=1; i<arr.size(); i++){
		int cnt=(arr[i]-arr[i-1])/mid;
		if(((arr[i]-arr[i-1])/mid)==cnt*mid){
			cnt--;
		}
		ans+=cnt;
	}

	return ans;
}

long double minimiseMaxDistance(vector<int> &arr, int k){
	long double low=0;
	long double high=0;
	int n=arr.size();
	for(int i=0; i<n; i++){
		high=max(high, (long double)(arr[i+1]-arr[i]));
	}
	
	
	while(high-low>1e-6){
		long double mid=(high+low)/(2.0);
		int cnt=countGasStations(arr, mid);
		
		if(cnt>k){
			low=mid;
		} else{
			high=mid;
		}
	}	
	return high;
}
// TC=O(log(maxDiff)*N)
// SC=0(1)

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
