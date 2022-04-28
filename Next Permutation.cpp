vector<int> nextPermutation(int N, vector<int> arr){
        int idx = -1;
        for(int i=N-1; i>0; i--){
            if(arr[i]>arr[i-1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){
            reverse(arr.begin(),arr.end());
        }else{
        int prev = idx;
        for(int i=idx+1; i<N; i++){
            if(arr[i]<=arr[prev] && arr[i]>arr[idx-1]){
                prev = i;
            }
        }
        swap(arr[idx-1],arr[prev]);
        reverse(arr.begin()+idx,arr.end());
        }
        return arr;
    }