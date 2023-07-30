// Optimal solution 1 - comparing end and start of arrays and then sorting.
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int i=a.size()-1;
	int j=0;
 
	while(i>=0 && j<b.size() && a[i]>b[j]){
		swap(a[i], b[j]);
			i--; j++;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
}
// TC=O(min(N,M)) + O(NlogN) + O(MlogM)
// SC=O(1)

// Gap Method - slighlty better
#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int len=a.size()+b.size();
	int gap=(len/2)+(len%2);

	while(gap>0){
		int left=0;
		int right=gap;

		while(right<len){
			// left in 1st array and right in 2nd array 
			if(left<a.size() && right>=a.size()){
				if(a[left]>b[right-a.size()]){
					swap(a[left], b[right-a.size()]);
				}
			}// Both in 2nd array 
			else if(left>=a.size()){
				if(b[left-a.size()]>b[right-a.size()]){
					swap(b[left-a.size()], b[right-a.size()]);
				}
			}// Both in 1st array
			else{
				if(a[left]>a[right]){
					swap(a[left], a[right]);
				}
			}
			left++; right++;
		}

		if(gap==1) break;
		gap=(gap/2)+(gap%2);
	}
}

// More readable code
#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n=a.size();
	int m=b.size();
	
	int gap=((n+m)/2)+((n+m)%2);
	
	while(1){
		int i=0;
		int j=gap;
		
		while(j<(n+m)){
			if(i<n && j>=n){
				if(a[i]>b[j-n]){
					swap(a[i], b[j-n]);
				}
			}else if(i>=n){
				if(b[i-n]>b[j-n]){
					swap(b[i-n], b[j-n]);
				}
			}else {
				if(a[i]>a[j]){
					swap(a[i], a[j]);
				}
			}
			i++; j++;
		}
		
		if(gap==1) break;
		gap=(gap/2)+(gap%2);
	}
	
}

// TC=O((N+M)*log(N+M))
// SC=O(1)
