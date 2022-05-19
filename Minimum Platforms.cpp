    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr, arr+n);
        sort(dep, dep+n);
        int i=1, j=0;
        int plat=1, maxi=1;
        
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                plat++;
                i++;
            }else if(arr[i]>dep[j]){
                plat--;
                j++;
            }
            
            if(plat>maxi){
                maxi=plat;
            }
        }
        return maxi;
    }
