bool arraySortedOrNot(int arr[], int n) {
        bool sorted = true;
        
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                sorted=false;
                break;
            }
        }
        
        return sorted;
    }

// TC=O(N), SC=O(1)
