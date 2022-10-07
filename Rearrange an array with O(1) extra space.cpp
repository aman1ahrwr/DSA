 void arrange(long long arr[], int n) {
        
        for(long long i=0; i<n; i++){
            arr[i]=(arr[arr[i]]%n)*n + arr[i];
        }
        
        for(long long i=0; i<n; i++){
            arr[i]=arr[i]/n;
        }
        
    }
