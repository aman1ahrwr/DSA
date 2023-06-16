void insertionSort(int arr[], int n)
    {
        for(int i=0; i<n; i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1], arr[j]);
                j--;
            }
        }
    }

// Worst and Best Case TC = O(n^2), Best Case TC = O(n)
// SC=O(1)
