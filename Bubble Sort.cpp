// Iterative Approach to Sort using Bubble Sort
void bubbleSort(int arr[], int n)
{
    for(int i=1; i<n; i++){
        int swapped = 0;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped=1;
            }
        }
        if(swapped==0) break;
    }   
}

// TC(B) = O(n), TC(W, Avg) = O(n^2)
// SC=O(1)

// Recursive Approach, complete outer loop with the help of Recursion
void recursiveBubble(int arr[], int n){
        if(n==1){
            return;
        }
        
        int swapBool = false;
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapBool=true;
            }
        }
        
        if(swapBool==false){
            return;
        }
        
        recursiveBubble(arr, n-1);
    }
    
    void bubbleSort(int arr[], int n)
    {
        recursiveBubble(arr, n); 
    }
