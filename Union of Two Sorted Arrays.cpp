vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0;
        int j=0;
        vector<int> ans;
        
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(ans.empty() || ans.back()!=arr1[i]){
                    ans.push_back(arr1[i]);
                }
                i++; 
            }else{ 
                if(ans.empty() || ans.back()!=arr2[j]){
                    ans.push_back(arr2[j]);
                }
                j++; 
            }
        }
        
        while(i<n){
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++; 
        }
        
        while(j<m){
            if(ans.empty() || ans.back()!=arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++; 
        }
        
        return ans;
    }


// Time Complexity: O(m+n), Because at max i runs for n times and j runs for m times. When there are no common elements in arr1 and arr2 and all elements in arr1, arr2 are distinct. 
// Space Complexity : O(m+n) {If Space of Union Vector is considered} 
// O(1) {If Space of union Vector is not considered}
