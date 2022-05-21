void recursive(int ind, int sum, vector<int> &arr, int N, vector<int> &ans){
        if(ind==N){
            ans.push_back(sum);
            return;
        }
        
        recursive(ind+1, sum+arr[ind], arr, N, ans);
        recursive(ind+1, sum, arr, N, ans);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        recursive(0, 0, arr, N, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
