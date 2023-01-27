int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> map;
    int maxi=INT_MIN;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
        maxi=max(maxi, map[arr[i]]);
    }

    for(auto i: arr){
        if(map[i]==maxi){
            return i;
        }
    }

}
