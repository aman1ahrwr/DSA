int countOccurence(int arr[], int n, int k) {
        unordered_map<int, int> map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        
        int count=0;
        int para = n/k;
        for(auto i: map){
            if(i.second>para){
                count++;
            }
        }
        return count;
    }
