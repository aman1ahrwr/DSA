void quickSort(int arr[], int low, int high)
    {
        if(low>=high){
            return;
        }
        
        int pivot = partition(arr, low, high);
        
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       int i=low;
       int j=high;
       
    //   counting elements smaller than or equal to pivot.
       int count=0;
       for(int i=low+1; i<=high; i++){
           if(arr[i]<=pivot){
               count++;
           }
       }
       
       int pivotInd = low+count;
       swap(arr[low], arr[pivotInd]);
       
       while(i<pivotInd && j>pivotInd){
           while(arr[i]<=pivot){
               i++;
           }
           
           while(arr[j]>pivot){
               j--;
           }
           
           if(i<pivotInd && j>pivotInd){
               swap(arr[i], arr[j]);
               i++; j--;
           }
           
       }
       return pivotInd;
    }
