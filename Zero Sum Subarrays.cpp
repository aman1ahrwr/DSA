ll findSubarray(vector<ll> arr, int n ) {
        ll count=0;
        unordered_map<ll, int> map;
        ll sum=0;
        map[0]=1;
        for(int i =0; i<n; i++){
            sum+=arr[i];
            if(map.find(sum)!=map.end()){
                count+=map[sum];
                map[sum]++;
            }else{
                map[sum]++;
            }
        }
        return count;
    }
