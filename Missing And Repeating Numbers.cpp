// Approach Using HashArray
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int arr[a.size()+1]={0};

    for(int i=0; i<a.size(); i++){
        arr[a[i]]+=1;
    }

    int miss=-1, repeat=-1;
    for(int i=1; i<a.size()+1; i++){
        if(arr[i]==2) repeat=i; 
        if(arr[i]==0) miss=i; 
    }

    return {repeat, miss};
}
// TC=O(N)
// SC=O(N)
