double median(vector<int>& a, vector<int>& b) {
	int n1=a.size();
	int n2=b.size();
	if(n1>n2) return median(b, a);
	int low=0;
	int high=n1;
	int leftHalf=(n1+n2+1)/2;
	
	while(low<=high){
		int mid1=low+(high-low)/2;
		int mid2=leftHalf-mid1;
		int l1=INT_MIN, l2=INT_MIN;
		int r1=INT_MAX, r2=INT_MAX;

		if(mid1-1>=0) l1=a[mid1-1];
		if(mid2-1>=0) l2=b[mid2-1];
		if(mid1<n1) r1=a[mid1];
		if(mid2<n2) r2=b[mid2];

		if(l1<=r2 && l2<=r1){
			if((n1+n2)%2==0){
				return (double)(max(l1, l2)+min(r1, r2))/2.0;
			}
			return max(l1, l2);
		}else if(l1>r2){
			high=mid1-1;
		}else{
			low=mid1+1;
		}
	}
	return 0;
}
// TC=O(log(min(n, m)))
// SC=O(1)




// Better Solution 
// double median(vector<int>& a, vector<int>& b) {
// 	int n=a.size()+b.size();
// 	int ind1=(n/2)-1;
// 	int ele1=-1;
// 	int ind2=n/2;
// 	int ele2=-1;

// 	int cnt=0;
// 	int i=0;
// 	int j=0;
// 	while(i<a.size() && j<b.size()){
// 		if(a[i]<b[j]){
// 			if(cnt==ind1) ele1=a[i];
// 			if(cnt==ind2) ele2=a[i];
// 			i++;
// 			cnt++;
// 		}else{
// 			if(cnt==ind1) ele1=b[j];
// 			if(cnt==ind2) ele2=b[j];
// 			j++;
// 			cnt++;
// 		}
// 	}

// 	while(i<a.size()){
// 		if(cnt==ind1) ele1=a[i];
// 		if(cnt==ind2) ele2=a[i];
// 		i++;
// 		cnt++;
// 	}

// 	while(j<b.size()){
// 		if(cnt==ind1) ele1=b[j];
// 		if(cnt==ind2) ele2=b[j];
// 		j++;
// 		cnt++;
// 	}

// 	if(n%2==0){
// 		return (double)((double)(ele1 + ele2)) / 2.0;
// 	}

// 	return (double)ele2;
// }

// TC=O(n+m)
// SC=O(1)
