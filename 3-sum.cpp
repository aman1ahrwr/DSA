vector<vector<int>> triplet(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n-2; i++){
        if(i==0 || (i>0 && arr[i]!=arr[i-1])){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==0){
                    vector<int> temp={arr[i], arr[j], arr[k]};
                    ans.push_back(temp);
                    j++; k--;
                    while(j<k && arr[j]==arr[j-1]) j++;
                    while(j<k && arr[k]==arr[k+1]) k--;
                }else if(sum<0){
                    j++;
                }else{
                    k--;
                }
            }
        }
    }

    return ans;
}

// TC=O(N^2)
// SC=O(K) where K is the number of triplets
