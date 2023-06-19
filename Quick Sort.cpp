class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high){
            return;
        }
        
        int pivotInd = partition(arr, low, high);
        quickSort(arr, low, pivotInd-1);
        quickSort(arr, pivotInd+1, high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       
       int i=low;
       int j=high;
       
       while(i<j){
           while(arr[i]<=pivot && i<=high){
               i++;
           }
           
           while(arr[j]>pivot && j>=low){
               j--;
           }
           
           if(i<j){
               swap(arr[i], arr[j]);
           }
       }
       
       swap(arr[low], arr[j]);
       
       return j;
    }
};

// TC = O(N*logN)
// SC = O(1)

