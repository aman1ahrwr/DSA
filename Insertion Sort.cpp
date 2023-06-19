// Iterative Approach to Sort using Insertion Sort
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


// Recursive Approach to Sort using Insertion Sort
void insert(int arr[], int i, int n)
    {
        if(i==n){
            return;
        }
        
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
        
        insert(arr, i+1, n);
    }


    void insertionSort(int arr[], int n)
    {
        int i=0;
        insert(arr, i, n);
    }
