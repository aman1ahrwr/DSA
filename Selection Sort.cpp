void selectionSort(int arr[], int n)
    {
       for(int i=0; i<n-1; i++){
           int miniInd = i;
           for(int j=i; j<n; j++){
               if(arr[miniInd]>arr[j]){
                   miniInd=j;
               }
           }
           swap(arr[i], arr[miniInd]);
       }
    }

// TC=O(n^2)
// SC=O(1)
