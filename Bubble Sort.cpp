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
