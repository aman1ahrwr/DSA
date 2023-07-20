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
