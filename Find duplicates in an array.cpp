    vector<int> duplicates(int arr[], int n) {
        vector<int> res;
        for(int i=0; i<n; i++){
            int index = arr[i]%n;
            arr[index] = arr[index] + n; 
        }
        bool flag = false;
        for(int i=0; i<n; i++){
            if((arr[i]/n)>1){
                res.push_back(i);
                flag = true;
            }
        }
        if(flag==false){
            res.push_back(-1);
        }
        return res;
    }
